//#include<iostream>
//using namespace std;
//
////�����ǳ����
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		m_age = age;
//		m_Height= new int(height);
//		cout << "Person���вι��캯������" << endl;
//	}
//	//�Լ�ʵ�ֿ������캯�����ǳ��������������
//	Person(const Person& p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_age = p.m_age;
//		//m_Height=p.m_Height;������Ĭ��ʵ�ֵ�=�����������д���
//		//�������
//
//		m_Height = new int(*p.m_Height);
//	}
//	~Person()
//	{
//		//�������룬���������ٵ��������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//
//		cout << "Person���������캯������" << endl;
//	}
//	int m_age;//����
//	
//	int* m_Height;
//};
//
//void test01()
//{
//	Person p1(18,160);
//	cout << "p1��������:" << p1.m_age <<"p1�������:"<<*p1.m_Height <<endl;
//	Person p2(p1);
//	cout << "p1��������:" << p2.m_age << "p1�������:" << *p1.m_Height <<endl;
//	
//}
//int main()
//{
//	test01();
//	return 0;
//}