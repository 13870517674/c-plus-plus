#include<iostream>
class Test {
public:
	static class T {
	public:
		int a = 0;
	};
	int a=0;
};
int main() {
	Test::T a;
	a.a = 100;
	Test c;
	c.a = 100;
	std::cout << a.a << "," << c.a << std::endl;
}
//��Ӧ��������������չ�����ձ�׼��Ӧ�ñ���������MSVC����ֻ�Ǿ���
//warning C4091: ��static ��: û����������ʱ���ԡ�Test::T�������