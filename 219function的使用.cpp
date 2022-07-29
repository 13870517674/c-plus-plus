#include<iostream>
#include<string>
#include<functional>
using namespace std;

//��ͨ����
void func()
{
	cout << __func__ << endl;
}

//2�����о�̬����
class Test
{
public:
	static int test_func(int a)
	{
		cout << __func__ << "(" << a << ")->:";
		return a;
	}
};
//3�����еķº���
class MyFunctor
{
public:
	int operator()(int a)
	{
		cout << __func__ << "(" << a << ")->:";
		return a;
	}
};
int main()
{
	//1������ͨ����
	function<void()>f1 = func;//�൱�ں���ָ��
	f1();
	//2�������о�̬����	Ҫд������
	function<int(int)>f2 = Test::test_func;
	cout << f2(10) << endl;//Test::test_func(10);
	//3�������еķº������󶨶���		���ǰ���������
	function<int(int)>f3 = MyFunctor();
	cout << f3(20) << endl;
	return 0;
}
