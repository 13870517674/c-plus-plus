//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
////���ü����㷨 set_intersection ����
//void Print(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int>vTarget;
//	//Ŀ��������Ҫ��ǰ���ٿռ�
//	//���������� ��������������С���� ���ٿռ� ȡС���� ȡС������size����
//	vTarget.resize(min(v1.size(), v2.size()));//minʹ�ÿ⺯��
//
//	//��ȡ����,���������շ��صĽ��������һ��Ԫ�ص�λ��
//	vector<int>::iterator inEnd = set_intersection(v1.begin(), v1.end(), v2.begin(),v2.end(),vTarget.begin());
//	for_each(vTarget.begin(), inEnd, Print);//�������
//}
//int main()
//{
//	test01();
//	return 0;
//}
////��Ŀ�����������ڴ��ʱ��������������н�С��
////����ֵ�ǽ��������һ��Ԫ�ص�λ��