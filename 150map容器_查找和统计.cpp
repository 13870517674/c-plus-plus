//#include<iostream>
//using namespace std;
//#include<map>
//
////map�������Һ�ͳ��
//void test01()
//{
//	//����
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//	{
//		cout << "�鵽��Ԫ��key=" << pos->first << " value=" << pos->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
//	//map��������������ظ�keyԪ��,coutͳ�ƶ��� ���Ҫ����0Ҫ����1
//	//mulitmap��countͳ�ƿ��ܴ���1
//
//	int num =  m.count(3);
//	cout << "num=" << num << endl;//1/0
//}
//int main()
//{
//	test01();
//	return 0;
//}
////����find���ص��ǵ�����
////ͳ��count����map�����Ϊ0