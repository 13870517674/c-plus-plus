#include<iostream>
using namespace std;
void foo(int m, int n)
{
	//�쳣����
	try {
		//�׳��쳣
		//int t = m / n;

		//0x0000005�쳣
		//char* p = nullptr;
		//*p = 123;

		//��Ϊ�׳��쳣
		//throw 1;
		//throw 1.0f;
		//throw "Hello";

	}
	catch (int n)
	{
		//��catch����д���������ĵ��쳣����
		cout << n << endl;
		//��catch���쳣����Ȼһ����Բ�Ҫ��catch�������쳣
		throw "123";
	}
	//�����㣬��ʾ�ܽ����������͵��쳣
	catch (...) {
		cout << "error" << endl;
	}
}
int main(int argc, char* argv[])
{
	try {
		foo(1, argc - 1);
		//throw std::exception("hello123");
	}
	catch (std::exception& e) {
		//��ס�ˣ�Ȼ���ӡ
		cout << e.what() << endl;
	}
	return 0;
}