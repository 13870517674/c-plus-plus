//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
////vector�������������������
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//������һ��vector����������
//	vector<int>v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//
//	//ͨ�����������������е�����
//	//vector<int>::iterator itBengin = v.begin();//��ʼ������ ָ�������е�һ��Ԫ��
//	//vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ����������һ��λ��
//
//	////��һ�ֱ�����ʽ
//	//while (itBengin != itEnd)
//	//{
//	//	cout << *itBengin << endl;
//	//	itBengin++;
//	//}
//
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//�����ֱ�����ʽ ����STL�ṩ�����㷨
//	for_each(v.begin(), v.end(), myPrint);//v.begin()��ʾָ���һ��Ԫ�أ�v.end()��ʾָ�����һ��Ԫ�ص���һ��λ��
//}
//int main()
//{
//	test01();
//	return 0;
//}