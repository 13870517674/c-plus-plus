#include<iostream>
using namespace std;
class A
{
public:
	//��һ���麯��(�����Ǵ��麯��)��û����д��������voerride����
	virtual void func(int a) = 0;
};
class B:public A
{
public:
	//����д�麯���ĵط�����override��Ҫ����д���麯���ͻ���һģһ������Ȼ�޷�ͨ������
	virtual void func()override
	{

	}
};
int main()
{
	
}