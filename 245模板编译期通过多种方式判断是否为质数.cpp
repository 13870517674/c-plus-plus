#include<iostream>
#include<string>
template<unsigned p, unsigned d> // p��Ҫ�������֣�d����ǰ����
struct DoIsPrime {
	static constexpr bool value = (p % d != 0) && DoIsPrime<p, d - 1>::value;
};
template<unsigned p> // �������Ϊ 2��������ݹ�
struct DoIsPrime<p, 2> {
	static constexpr bool value = (p % 2 != 0);
};
template<unsigned p> // ��ģ��
struct IsPrime {
	// �� p/2 ��ʼ�ó�����ʼ�ݹ飺
	static constexpr bool value = DoIsPrime<p, p / 2>::value;
};

//��ģ������������ֹ��Щ�������
template<>//
struct IsPrime<0> { static constexpr bool value = false; };
template<>
struct IsPrime<1> { static constexpr bool value = false; };
template<>
struct IsPrime<2> { static constexpr bool value = true; };
template<>
struct IsPrime<3> { static constexpr bool value = true; };

void test01() {
	int num[IsPrime<5>::value]{ 10 };	//��Ϊ�����ھ��Ѿ��ó���������Կ����������±�
	std::cout << *num << std::endl;
	std::cout << IsPrime<21>::value << std::endl;
	std::cout << IsPrime<3>::value << std::endl;
}

//ʹ�ú����������ж�
constexpr bool doIsPrime(unsigned p, unsigned d) // p��Ҫ���ı�ţ�d����ǰ
{
	return d != 2 ? (p % d != 0) && doIsPrime(p, d - 1) // check this and smaller
		: (p % 2 != 0); // �������Ϊ 2��������ݹ�
}
constexpr bool isPrime(unsigned p)
{
	return p < 4 ? !(p < 2) // �����������	���С��4����ô1 2 3ֻ��1���������������������
		: doIsPrime(p, p / 2); // ʹ�ó��� fromp / 2 ��ʼ�ݹ�
}

//c++14�Ժ�constexpr��������ʹ�ó���C++�����д󲿷ֵĿ��ƽṹ����������ֱ��ʹ��һ��forѭ��Ҳ��
constexpr bool isPrime_(unsigned int p)
{
	for (unsigned int d = 2; d <= p / 2; ++d) {
		if (p % d == 0) {
			return false;
		}
	}
		return p > 1;
}

void test02() {
	std::cout << isPrime(21) << std::endl;
	std::cout << isPrime(3) << std::endl;

	std::cout << isPrime_(21) << std::endl;
	std::cout << isPrime_(3) << std::endl;
}
int main()
{
	//test01();	//��
	test02();	//����
	return 0;
}