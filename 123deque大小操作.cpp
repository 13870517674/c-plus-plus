//#include<iostream>
//using namespace std;
//#include<deque>
////deque������С����
//void printDeque(const deque<int>& v)
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
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty())//empty�������Ϊ�գ���ô�ͷ�����
//	{
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ:" << d1.size() << endl;
//		//deque����û�������ĸ���
//	}
//
//	//����ָ����С
//	d1.resize(15, 1);//���ذ汾,ָ����СΪ15�����ڵĲ�����1���ϣ�Ĭ����0
//	printDeque(d1);
//
//	d1.resize(5);//ָ��Ϊ��С5,������ɾ��
//	printDeque(d1);
//}
//int main()
//{
//	test01();
//	return 0;
//}
////deque����û�������ĸ���
////�ж��Ƿ�Ϊ��--empty
////����Ԫ�ظ���--size
////����ָ������--resize