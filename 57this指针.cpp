//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int m_age)
//	{
//		//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
//		this->Age = m_age;//(*this).m_Age = age;Ҳ��
//	}
//	Person& personAddAge(Person &p)
//	{
//		this->Age += p.Age;
//		//thisָ��p2��ָ�룬��*thisָ��ľ���p2�������ı���
//
//		return *this;//*thisָ����
//	}
//	int Age;
//};
////1.������Ƴ�ͻ
//void test01()
//{
//	Person p1(10);
//
//	Person p2(10);
//	//��ʽ���˼��
//	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1).personAddAge(p1);
//	cout << "p1������Ϊ:" << p1.Age << endl;
//
//	cout << "p2������Ϊ:" << p2.Age << endl;
//}
////2.���ض�������*this
//int main()
//{
//	test01();
//	return 0;
//}