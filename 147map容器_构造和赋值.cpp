//#include<iostream>
//using namespace std;
//#include<map>
////map��������͸�ֵ
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << "value=" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����map����
//	map<int, int>m;
//
//	m.insert(pair<int, int>(1, 10));//��������
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	printMap(m);//������Զ����������������
//
//	//��������
//	map<int,int>m2(m);
//	printMap(m2);
//
//	//��ֵ
//	map<int, int>m3;
//	m3 = m2;
//	printMap(m3);
//}
//int main()
//{
//	test01();
//	return 0;
//}
////map������Ԫ�ض���pair
////pair�е�һ��Ԫ��Ϊkey(��ֵ),����������,�ڶ���Ԫ��Ϊvalue(ʵֵ)
////����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
////map/numltimap���ڹ���ʽ����,�ײ�ṹ�Ƕ�����ʵ��
////map���������������ظ���keyֵ
////multimap�������������ظ�keyֵԪ��