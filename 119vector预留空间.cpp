//#include<iostream>
//using namespace std;
//#include<vector>
//
////vector����Ԥ���ռ�
//void test01()
//{
//	vector<int>v;
//	v.reserve(100000);//��ǰԤ���ռ�
//	int num = 0;//ͳ�ƿ��ٴ���
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "num=" << num << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}