//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
////�º��� ����ֵ������bool�������ͣ���Ϊν��
////һԪν��
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;//����5��Ϊ��
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//���������� ��û�д���5������
//	//GreaterFive()������������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.begin())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��˴���5������Ϊ:" << *it << endl;//�����6��6�ǵ�һ������5����
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
////����ֻ��һ����ν�ʣ���ΪһԪν��