//#include<iostream>
//using namespace std;
//#include<vector>
//
////��������
//
////1������ʹ��
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "����ǰ" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "������" << endl;
//	v1.swap(v2);
//	//swap(v1, v2);//Ҳ����ʹ������д��
//	printVector(v1);
//	printVector(v2);
//}
//
////2��ʵ����;
////����swap���������ڴ�ռ�
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{ 
//		v.push_back(i);
//	}
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ:" << v.size() << endl;
//
//	v.resize(3);//����ָ����С
//	//ָ����С����ı�����������
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ:" << v.size() << endl;
//
//	//����swap�����ڴ�
//	vector<int>(v).swap(v);
//	//vetor<int>(v)ʵ����һ�����������ʼ��Ϊv�Ĵ�С����3����������ָ��ľ�������ڴ�
//	//.swap(v)������������Ͷ���v���н�����vָ������������ڴ棬��������ָ��v���ڴ�
//	//������������������ͬ�ڴ�ͱ�ϵͳ����
//	//����������ص��ǣ���ǰ��ִ���꣬ϵͳ�ͻ��յ�
//	cout << "v������Ϊ:" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ:" << v.size() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}