#include<iostream>
//�䳤ģ�����۵����ʽ���
template<auto... args>
struct Mul
{
	constexpr static auto value = (... * args);
};

//��α���ģ��,�۵����ʽ���
template<auto... args>
constexpr auto Mul_ = (...*args);

int main() {
	std::cout << Mul<5, 6, 7, 8, 10.0>::value << std::endl;

	std::cout << Mul_<5, 6, 7, 8, 10.0> << std::endl;

	system("pause");
}