#include<iostream>
#include<vector>
namespace stdr = std::ranges;//�����ռ丳ֵ
//�����ǰ�std::ranges�����stdr
int main()
{
	std::vector<int>V{ 1,2,3 };
	auto it = std::inserter(V, V.begin() + 2);//��ȡ���������
	*it = 100;//����������ɱ���ֵ���ɱ���ӡ
	std::copy(V.begin(), V.end(), std::ostream_iterator<int>{std::cout, " "});
	std::endl(std::cout);
	stdr::copy(V, std::ostream_iterator<int>{std::cout, " "});//����д��Ҫ����ܶ࣬���ǰ������һ������
}