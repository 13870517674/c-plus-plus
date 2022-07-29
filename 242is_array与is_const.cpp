#include<iostream>
#include<string>
template<typename T>
auto func(T& a) {
	std::cout << typeid(a).name() << " ";
	if (std::is_array<T>::value) {
		std::cout  << "������" << std::endl;
	}
	else
		std::cout << "��������" << std::endl;
}

template<typename T>
auto func2(T& v) {
	std::cout << typeid(v).name() << " ";
	if (std::is_const<T>::value) {
		std::cout << "��const" << std::endl;
	}
	else
		std::cout << "����const" << std::endl;
}


int main()
{
	int a[5]{ 0 };
	int const a2[5]{ 0 };
	std::string str;
	std::string const str2;
	func(a);
	func(a2);
	//����string�ഴ���Ķ���typeidû�а취����cv�޶���
	func(str);
	func(str2);
	std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;
	func2(a);
	func2(a2);
	//��Ȼ��ӡ�����Ϳ�����һ��������is_const�����ܹ������Ƿ�Ϊconst
	func2(str);
	func2(str2);
	return 0;
}
