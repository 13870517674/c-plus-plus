//#include<iostream>
//using namespace std;
//#include<string>
////ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ
//
////��ǰ�ñ�����֪��Person��Ĵ���
//template<class T1, class T2>
//class Person;
////����ʵ�ֵ���д��ǰ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << "����ʵ��---����:" << p.m_Name << "����:" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ��� ����ʵ��
//	//��ǰѧ��Ԫ��ʱ�����������һ�����������޷���Ȩ�޵ĵط���
//	//������ֱ������ʵ���ˣ����������Ա������ʵ����û�з���Ȩ�ޣ���ȫ�ֺ���
//	friend void printPerson(Person<T1, T2>p)
//	{
//		cout << "����:" << p.m_Name << "����:" <<p.m_Age << endl;
//	}
//
//	//ȫ�ֺ��� ����ʵ��
//	//��һ����ģ������б�
//	//�������ȫ�ֺ���������ʵ�֣���Ҫ�ñ���������֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2>p);
//
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
////1��ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int>p("Tonm", 20);
//	printPerson(p);
//}
//
////2��ȫ�ֺ���������ʵ��
//void test02()
//{
//	Person<string, int>P("ţ��", 118);
//	printPerson2(P);
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
////����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ��