//#include<iostream>
//using namespace std;
//#include<deque>
//#include<algorithm>//��׼�㷨ͷ�ļ�
//void printDeque(const deque<int>&v)
//{
//	for (deque<int>::const_iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	printDeque(d);
//
//	//����	Ĭ�ϴ�С���� ����
//	//����֧��������ʵĵ�����������������������sort�㷨ֱ�ӽ�������
//	sort(d.begin(), d.end());
//	cout << "�����" << endl;
//	printDeque(d);
//}
//
//int main()
//{
//	test01();
//	string a;
//	return 0;
//}
////sort�����㷨�ǳ�ʵ��