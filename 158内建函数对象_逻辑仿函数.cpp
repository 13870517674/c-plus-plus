//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<functional>
//
////�ڽ���������_�߼��º���
////�߼��� Iogical_not
//
//void test01()
//{
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";//����v������������������
//	}
//	cout << endl;
//
//	//�����߼��� ������v���˵�����v2�У���ִ��ȡ������
//	vector<bool>v2;
//	v2.resize(v.size());//Ŀ������v2��Ҫ��ǰ���ٿռ�
//
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());//�ĸ���������Ҫ���˵������Ŀ�ʼ����������β�����������˵�ģ��Ŀ�ʼ�����������һ���ڽ��º������ڰ��˵Ĺ�����������
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << " ";//�������v2
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
////�߼��º���ʵ��Ӧ�ú��٣��˽⼴��