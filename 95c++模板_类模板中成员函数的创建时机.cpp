//#include<iostream>
//using namespace std;
//
////��ģ���г�Ա��������ʱ��
////��ģ���г�Ա�����ڵ���ʱ��ȥ����
//
//class Person
//{
//public:
//	void showPerson()
//	{
//		cout << "Person show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//
//	//��ģ���еĳ�Ա����
//	void func1()
//	{
//		obj.showPerson();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	MyClass<Person>m;//ģ��Ĳ����б���Person��ʾ������������Person
//	m.func1();
//	//m.func2();���ܵ������������Ϊ��func2��Person2���͵�
//}
//int main()
//{
//	test01();
//	return 0;
//}
////ģ���಻���࣬ģ�庯��Ҳ���Ǻ�����ֻ����ʩ��ģ�������Ż���廯
//��ģ���еĳ�Ա����������һ��ʼ�ʹ����ģ��ڵ���ʱ��ȥ����