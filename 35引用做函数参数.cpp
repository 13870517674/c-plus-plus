//#include<iostream>
//using namespace std;
//
//void myswap01(int *a, int *b)//��ַ����
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void myswap02(int &a, int &b)//���ô��ݣ����൱�ڱ�����a��b����ʵ�α��������ǲٿ�ͬһ���ڴ�
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	cout << "a=" << a << " b=" << b << endl;
//	myswap02(a, b);
//	cout << "a=" << a << " b=" << b << endl;
//
//	int& p = a;
//	cout << p << endl;
//	return 0;
//}