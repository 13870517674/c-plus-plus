//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>//o������
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//class Great30
//{
//public:
//	bool operator ()(int val)//ν��
//	{
//		return val >= 30;
//	}
//};
////���ÿ������滻�㷨 replace_if
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(30);
//	
//
//	cout << "�滻ǰ" << endl;
//	for_each(v.begin(), v.end(), MyPrint());//��ʵʹ�÷º������ߺ���������û�����𣬶�����
//	cout << endl;
//	//�����ڵ���30 �滻Ϊ3000
//	//replace_if��replace��������ǵ�����������ǰ��ʹ��ν�ʱ�ʾ�������٣�����ֻ��ʹ�þ���ֵ�����
//	cout << "�滻��" << endl;
//	replace_if(v.begin(), v.end(),Great30(),3000);
//
//	for_each(v.begin(), v.end(), MyPrint());//��ʵʹ�÷º������ߺ���������û�����𣬶�����
//}
//int main()
//{
//	test01();
//	return 0;
//}