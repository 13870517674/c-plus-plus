#include<iostream>
template <typename T>
class Test {
public:
	void print() {
		std::cout << "General template object" << std::endl;
	}
};

template<>   // ��int��������
class Test<int> {
public:
	void print() {
		std::cout << "Specialized template object" << std::endl;
	}
};

template<typename T,typename A>
class Test2 {
public:
	void print() {
		std::cout << "111111" << std::endl;
	}
};

template<typename T>
class Test2<T,int> {
public:
	void print() {
		std::cout << "666666" << std::endl;
	}
};
int main()
{
	Test<int> a;
	Test<char> b;
	Test<float> c;
	a.print();//Specialized template object
	b.print();//General template object
	c.print();//General template object
	//����һ���򵥵����ӣ����Կ�������ͺ���ģ��������Ҳûɶ��������Щ�����ػ�Ϊ��������

	//����дһ��ƫ�ػ�����ģ��
	Test2<double,float>v1;//111111
	Test2<double, int>v2;//666666
	v1.print();
	v2.print();
	return 0;
}
//���ã�ָ��ȷ�ʽ���ǲ���׸��