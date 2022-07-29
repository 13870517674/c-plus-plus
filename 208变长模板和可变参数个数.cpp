#include<iostream>
using namespace std;
//1���䳤ģ������
template<auto...last>
class Test
{

};
//2���䳤ģ���ඨ��
template<auto first, auto...last>
class Test<first, last...>
{
public:
	static const auto val = first * Test<last...>::val;
};
//�߽�����
template<>
class Test<>
{
public:
	static const auto val = 1;
};
//�䳤ģ�����۵����ʽ���
template<auto... args>
struct Mul
{
	constexpr static auto value = (... * args);
};

template<auto... args>
constexpr auto Mul_ = (...*args);
//����ɱ��������,ͬʱ��ӡ�����ֵ���ݹ�
void func() {}
template<class T, class ...argv>
void func(T num, argv...args)
{
	//cout << "num=" << sizeof...(args) << endl;
	cout << num << endl;
	func(args...);
}

int main()
{
	//cout << Test<2, 3, 4, 5>::val << endl;

	cout << Mul<5, 6, 7, 8, 10.0>::value << std::endl;

	cout << Mul_<5, 6, 7, 8, 10.0> << std::endl;

	//func(10, 1, "jjj");
	return 0;
}
//�ݹ鷽ʽ�Ľ��һ��Ҫ�ѳ���д��ģ������