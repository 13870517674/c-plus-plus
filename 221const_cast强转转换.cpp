#include<iostream>
#include<string>
//c++��һ��const�����޷��޸�
int main()
{
	const int n = 10;
	int* p = const_cast<int*>(&n);//ǿ��ȥ��const����
	*p = 2;						//������c++11�����޷��޸ģ����Ա���ͨ������ִֹ��
	std::cout << n << std::endl;
	return 0;
}
