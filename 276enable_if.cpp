#include<iostream>
/*
std::enable_if ����˼�壬��������ʱ������Ч����Ϊѡ�����͵�С���ߣ���㷺��Ӧ���� C++ ��ģ��Ԫ��̣�meta programming����
*/

template <typename T,typename A>
struct check;

template <typename T>
struct check<T, typename std::enable_if<T::value>::type> {
	static constexpr bool value = T::value;
};
int main()
{
	std::cout<<check<int,true>
}