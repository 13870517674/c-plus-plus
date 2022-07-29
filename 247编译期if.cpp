#include<iostream>
#include<string>
template<typename T, typename...Types>
void print(T const& firstArg, Types const&...args)
{
	std::cout << firstArg << std::endl;
	if constexpr (sizeof...(args) > 0) {
		print(args...); //���������������¿���...��args��>0 ���� C++17 ��
	}
}
int main()
{
	print(1, 2, 3, 4, 5, 6);
	return 0;
}