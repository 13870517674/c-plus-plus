//#include<iostream>
//using namespace std;
////�����������������
//
////��ӡ�����
//class MyPrint
//{
//public:
//	//���غ������������
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void test01()
//{
//	MyPrint myPrint;
//	myPrint("hello word");//����ʹ�������ǳ������ں������ã���˳�Ϊ�º���
//}
//
////�º����ǳ���û�й̶���д��
////�ӷ���
//class MyAnd
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	MyAnd myadd;
//	int ret= myadd(100, 100);
//	cout << "ret=" << ret << endl;
//
//	//������������
//	cout << MyAnd()(100, 100)<< endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}