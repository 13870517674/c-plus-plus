//#include<iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////veector���ݺʹ�С
//void test01()
//{
//	vector<int>v1;
//	for (int i=0;i<10;i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty())//Ϊ�� ��������Ϊ�գ�emptp�ж��Ƿ�Ϊ��
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ:" << v1.capacity() << endl;//capacity������������
//		cout << "v1�Ĵ�СΪ:" << v1.size() << endl;//size����Ԫ�ظ���
//	}
//
//	//resize����ָ����С
//	v1.resize(15);
//	printVector(v1);//�������ָ���ı�ԭ�������ˣ�Ĭ��0���
//
//	v1.resize(10);//��С���10
//
//	v1.resize(15, 100);//���ذ汾��ָ����100��䣬������Ĭ��0
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1);//���ָ���ı�ԭ���̣���������ɾ����
//}
//int main()
//{
//	test01();
//	return 0;
//}