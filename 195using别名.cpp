//#include<iostream>
//#include<array>
//#include<string>
//
//template<class T,class B>
//class Person
//{
//public:
//	Person(T name, B age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void show()
//	{
//		std::cout << this->m_Age << " " << this->m_Name << std::endl;
//	}
//
//private:
//	T m_Name;
//	B m_Age;
//};
//void test01()
//{
//	//arr����array<int,10>�ı���
//	using arr = std::array<int, 10>;
//	arr num{0,1,2,3,4,5,6,7,8,9};
//	for (int i : num)std::cout << i << " ";
//	std::cout << typeid(num).name() << std::endl;
//
//	//����c++�ṩ�ı�����ʽ,Ҳ����ʹ��c����typedef
//	typedef std::array<int, 10>i;
//	std::cout << typeid(i).name() << std::endl;
//}
//
//void test02()
//{
//	//p�������ģ��ı���,�Ѿ�д����ģ����������Կ���ֱ�Ӱ�p��������ʹ�ü���
//	using p = Person<std::string,int>;
//	p person("����", 12);
//	person.show();
//}
//int main()
//{
//	//test01();
//	//ʹ��ģ��using�ṩ����
//	test02();
//	return 0;
//}