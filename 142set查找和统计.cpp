//#include<iostream>
//using namespace std;
//#include<set>
//
////set���� ���Һ�ͳ��
//
//void test01()
//{
//	//����
//	set<int>s1;
//
//	//��������
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	//auto��c++���Զ��Ʋ��������͹ؼ���,����auto��ͬ��set<int>::iterator
//	auto pos=s1.find(300);//find���Һ����᷵��һ��������
//
//	if (pos != s1.end())//���������ָ�����end()����û�ҵ�
//	{
//		cout << "�ҵ�Ԫ��" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//}
//
////ͳ��
//void test02()
//{
//	set<int>s1;
//
//	//��������
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	//ͳ��30�ĸ���
//	int num = s1.count(30);
//	//����set���ԣ�ͳ�ƵĽ��Ҫ����0��Ҫ����1����Ϊset����������ظ�������
//	cout << "num=" << num << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
////find()����
////count()ͳ��