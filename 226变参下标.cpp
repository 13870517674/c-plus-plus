#include<iostream>
#include<string>
template<typename...Args>
auto print(Args&&...args) {
	(std::cout << ... << args) << std::endl;//����c++17���۵����ʽ����������������������

}
template<typename C, typename... Idx>
void printElems2(C const& coll ,Idx... idx)
{
	print(coll[idx]...);
}

template<typename C, typename... Idx>
void printElems(C const& coll, Idx... idx)
{
	((std::cout << coll[idx] << ","), ...);//�м��ö��Ÿ���
}

//ֱ��cout�������ʹ���ⲿ����
template<typename C, typename... Idx>
void printElems(C const& coll, Idx... idx)
{
	(std::cout << ... << coll[idx]);
}
int main()
{
	const int num[5]{ 1,2,3,4,5 };
	printElems(num, 1, 2, 3, 4);
	return 0;
}