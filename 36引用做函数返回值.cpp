//#include<iostream>
//using namespace std;
////1.��Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;//����������е�ջ��
//	return a;
//}
////2.�����ĵ��ÿ���Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ� �����ڳ��������ϵͳ�ͷ�
//	return a;
//}
//int main()
//{
//	//int& ref = test01();
//	//cout << ref << endl;//���ж��Ǵ���д��
//
//	int& ref2 = test02();
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//	test02() = 10000;
//	cout << ref2 << endl;
//	cout << ref2 << endl;
//}