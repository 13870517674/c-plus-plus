#include<iostream>
#include<string>
#include<functional>//ͷ�ļ��ṩԭ��
using namespace std;
using namespace std::placeholders;//���������ռ���ٴ�����
class Test
{
public:
	void func(int x, int y)
	{
		cout << x << " " << y << endl;
	}
	int a;
};
int main()
{
	Test obj;

	//�󶨳�Ա����
	function<void(int, int)>f1 = bind(&Test::func, &obj, _1, _2);
	f1(11, 22);

	function<int&()>f2 = bind(&Test::a, &obj);
	f2() = 111;//obj.a=111;
	cout << obj.a << endl;
	return 0;
}
