//#include<iostream>
//using namespace std;
////�Ӻ����������
//
////1.��Ա��������+��
//class Person
//{
//public:
//	/*Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//	int m_A;
//	int m_B;
//};
////2.ȫ�ֺ�������+��
//Person operator + (Person & p1, Person & p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
////�������صİ汾
//Person operator+(Person& p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//void test01()
//{
//	Person p1;
//	p1.m_A = 100;
//	p1.m_B = 20;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 30;
//
//	Person p3 = p1 + p2;
//	/*��Ա���������صȼ��ڣ�p1.operator+(p2)
//	ʵ���Ͼ���p1��Ա�����Լ����ڳ�Ա��������Ϊ��p1����
//	����thisָ���Լ������Լ��Ϳ��Զ�ȡp1�������ˣ�Ȼ�󿿴��ݵ�p2���Ϳ��������
//	+�Ǻ����ı�����ʵ��operator��һ���ؼ���*/
//
//	//ȫ�ֺ������صı��ʵ���:Person p3=operator+(p1,p2);
//
//	//��������أ�Ҳ���Է�����������
//	Person p4; p4.m_A = 0; p4.m_B = 0;
//	p4 = p4+ 30;
//
//	/*cout << "P3m_A=" << p3.m_A << endl;
//	cout << "P3m_B=" << p3.m_B << endl;*/
//
//	cout << "P4m_A=" << p4.m_A << endl;
//	cout << "P4m_B=" << p4.m_B << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}