//#include<iostream>
//using namespace std;
////���ص��������
//
////�Զ�������
//class Myinteger
//{
//	friend ostream& operator<<(ostream&, Myinteger myint);
//	friend void test01();
//	friend void test02();
//public:
//	Myinteger()
//	{
//		m_Num = 0;
//	}
//	//����++�����
//
//	//����ǰ��++�����
//	Myinteger& operator++()//����������Ϊ��һֱ��һ�����ݽ��в���
//	{
//		//������
//		m_Num++;
//		//��������
//		return *this;
//	}
//	//���غ���++�����
//	Myinteger operator++(int)//int����ռλ��������������ǰ�úͺ���
//	{
//		//�� ��¼��ʱ���
//		Myinteger temp = *this;
//		//�� ����
//		m_Num++;
//		//��󽲼�¼�Ľ��������
//		return temp;
//	}
//private:
//	int m_Num;
//};
////�������������
//ostream& operator<<(ostream&, Myinteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
////void test01()//ǰ��
////{
////	Myinteger myint;
////	myint.m_Num = 20;
////	cout << myint << endl;
////	cout << ++(++myint)<< endl;
////}
//
//void test02()//����
//{
//	Myinteger myint;
//	cout<<myint++<< endl;
//	cout << myint << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//}