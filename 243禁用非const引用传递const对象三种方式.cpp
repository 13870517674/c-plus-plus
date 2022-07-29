#include<iostream>
#include<string>

template<typename T>
void outR(T& arg) {
	static_assert(!std::is_const<T>::value, "T is const");
	std::cout << typeid(T).name() << " not is const" << std::endl;
}

template<typename T, typename = std::enable_if_t<!std::is_const<T>::value>>
void outR2(T& arg) {
	std::cout << typeid(T).name() << " not is const" << std::endl;
}

template<typename T>
requires (!std::is_const_v<T>)
void outR3(T& arg) {
	std::cout << typeid(T).name() << " not is const" << std::endl;
}

int main()
{
	int const a{ 0 };
	int b{ 0 };
	//outR(a);	//ʹ�þ�̬���Բ����������
	outR(b);
	//outR2(a);	//ʹ��endle_if_t����ģ��
	outR2(b);
	//outR3(a);	//ʹ��concepts �����ø�ģ��
	outR3(b);
	return 0;
}