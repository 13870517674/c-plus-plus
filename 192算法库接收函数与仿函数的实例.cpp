//#include<iostream>
//#include<array>
//class Print
//{
//public:
//	void operator()(std::array<int, 5>num)const
//	{
//		for (int i : num)
//		{
//			std::cout << i << " ";
//		}
//		std::cout << std::endl;
//	}
//};
//
//
//void print(std::array<int, 5>num)
//{
//	for (int i : num)
//	{
//		std::cout << i << " ";
//	}
//	std::cout << std::endl;
//}
//
//template<class T, class B>
//auto show(T num, B print)
//{
//	print(num);
//	std::cout << typeid(print).name() << std::endl;
//}
//
//void test03()
//{
//	std::array<int, 5>num{ 1,2,3,4,5 };
//	//ʹ�÷º���
//	show(num, Print());
//	//ʹ����ͨ����
//	show(num, print);
//	//������������
//	Print()(num);
//}
//int main()
//{
//	test03();
//}