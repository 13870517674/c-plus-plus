//#include<iostream>
//using namespace std;
////�������������
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);//ȫ�ֺ�����������˽�У�friend���Ϻ�������
//public:
//	Person(int a, int b)//�����㺯��
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	//���ó�Ա�����������������	p.operator<<(cout) �򻯰汾p<<cout
//	//�������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����
//	void operator<<(Person& p)
//	{
//	}
//	int m_A;
//	int m_B;
//};
//
////ֻ������ȫ�ֺ����������������
////void operator<<(ostream& cout, Person& p)//����operator<<(cout,p)	��cout<<p
////{
////	cout << "m_A=" << p.m_A << " m_B=" << p.m_B << endl;
////}
//
////cout�������������һ��������ostream& ���Ҳ�����������Ҫ��ӡ�������ݳ�Ա
//ostream & operator<<(ostream& cout, Person& p)//����operator<<(cout,p)	��cout<<p
//{
//	cout << "m_A=" << p.m_A << " m_B=" << p.m_B << endl;
//	return cout;
//}
//void test01()
//{
//	Person p(10,10);
//	cout << p << p << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}