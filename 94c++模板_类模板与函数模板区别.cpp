//#include<iostream>
//using namespace std;
//#include<string>
//
////��ģ���뺯��ģ������
//template<class NameType,class AgeType=int>//����Ĭ�ϲ�����ֻ����ģ�����
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name="<<m_Name << "age=" << m_Age << endl;//�Ӳ���thisָ��ʵ����һ����˼
//	}
//	NameType m_Name;
//	AgeType m_Age;
//};
////1����ģ��û���Զ��Ƶ�����ʹ�÷�ʽ
//void test01()
//{
//	//Person p("�����", 1000); �����޷����Զ������Ƶ�
//
//	Person<string>p("�����", 9999);
//	p.showPerson();
//}
////2����ģ����ģ������б������Ĭ�ϲ���
//
//int main()
//{
//	test01();
//	return 0;
//}