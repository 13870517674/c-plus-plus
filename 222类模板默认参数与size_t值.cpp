#include<iostream>
#include<string>
#include<algorithm>
template<typename T = int, std::size_t Maxsize = 100>
class Test{
public:
	T num[Maxsize];
};
int main()
{
	Test test;
	int a = 0;
	for (auto& i : test.num)i = a++;
	std::for_each(test.num, test.num + 100, [](int a) {std::cout << a << ","; });

	//����lambda���ʽ�ı��������ڱ�����ֵ
	[&]()mutable {a = 10; }();
	std::endl(std::cout);
	std::cout << a << std::endl;
	return 0;
}