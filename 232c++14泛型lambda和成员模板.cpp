#include<iostream>
#include<string>
/*��C++14 ������ķ���lambdas����һ�ֳ�Աģ��ļ򻯡�����һ���򵥵ļ�������������
�Ͳ���֮�͵�lambda��*/

/*
[](auto x, auto y) {
	return x + y;
}
*/
//��������Ĭ��Ϊ��������������һ���ࣺ
class SomeCompilerSpecificName {
public:
	SomeCompilerSpecificName(){}; // ���캯��ֻ���ɱ���������
		template<typename T1, typename T2>
	auto operator() (T1 x, T2 y) const {
		return x + y;
	}
};
int main()
{
	int x = 2;
	double y = 3.2,i=3.4;
	auto fool = [=](auto x, auto y) {return x + y; };
	std::cout << typeid(fool).name() << std::endl;
	std::cout << fool(x, y) << std::endl;//5
	std::cout << fool(x, i) << std::endl;//5.4
	return 0;
}
//������һ��ʵ��ʹ�õ�����
#include<iostream>
#include<string>
#include<array>
#include<algorithm>
void test01() {
	std::array<std::string, 2>str{ "111","222" };
	std::for_each(std::begin(str), std::end(str), [](auto i) {std::cout << i << ","; });
}
void test02() {
	int num[5]{ 1,2,3,4,5 };
	std::for_each(std::begin(num), std::end(num), [](auto i) {std::cout << i << ","; });
}
int main()
{
	//test01();
	test02();
	return 0;
}