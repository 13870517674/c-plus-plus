//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>//�ṩsort�㷨
//#include<functional>//�ṩ���÷º���
////��ϵ�º���
//
////���� greater
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)//ʹ���Լ�д�º����ķ���
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//����
//	//sort(v.begin(), v.end(), MyCompare());//ʹ���Լ�д�ķº���������1
//	//gerator<int>();
//	sort(v.begin(), v.end(), greater<int>());//��º�����ģ���������ͣ�����2����
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}
////��ϵ�º�������õľ���greator<>����