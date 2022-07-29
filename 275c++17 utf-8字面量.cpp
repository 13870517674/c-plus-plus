#include<iostream>

int main()
{
	using A = decltype(u'A');
	using B = decltype(u"A");
	using C = decltype(u8'A');
	using D = decltype(u8"A");
	using E = decltype(U'A');
	using F = decltype(U"A");
	using G = decltype(L'A');
	using H = decltype(L"A");
	std::cout << typeid(A).name() << std::endl;
	std::cout << typeid(B).name() << std::endl;
	std::cout << typeid(C).name() << std::endl;
	std::cout << typeid(D).name() << std::endl;
	std::cout << typeid(E).name() << std::endl;
	std::cout << typeid(F).name() << std::endl;
	std::cout << typeid(G).name() << std::endl;
	std::cout << typeid(H).name() << std::endl;
	
}
/*
u8���ڵ��ֽ�US-ASCII��UTF-8����
u�������ֽڵ�UTF-16����
U�������ֽڵ�UTF-32����
L����û����ȷ����Ŀ��ַ������������������ĸ��ֽ�
*/