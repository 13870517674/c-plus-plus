#include<iostream>
#include<string>
template<typename T>
class Base {
public:
	void bar() { std::cout << "111" << std::endl; };
};
template<typename T>
class Derived : public Base<T> {
public:
	void foo()
	{
		//this->bar();

		bar();//����д�������ʲ���
	}
};

class A {
public:
	void bar() { std::cout << "111" << std::endl; };
};
class B :public A {
public:
	void foo()
	{
		bar(); 
	}
};

int main()
{
	Derived<int> i;
	i.foo();
	i.bar();

	B v;
	v.bar();
	v.foo();
	return 0;
}
//�ɴ˵ó������Ҫ������ģ��Ҫ�������ķ�����ʹ��this����ͨ�ļ̳�����Ҫ