//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
//
////1��ͳ�����õ���������
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(40);
//
//	int num = count(v.begin(), v.end(), 40);
//
//	cout << "40��Ԫ�ظ���Ϊ" << num << endl;
//}
//
////2��ͳ���Զ�����������
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& v)
//	{
//		return this->m_Age == v.m_Age;//==���������
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("����", 35);
//	Person p4("����", 30);
//	Person p5("����", 40);
//
//	Person p("�����", 35);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//
//	int num = count(v.begin(), v.end(), p);//�ǵ�����==�õײ����ʶ���Զ�����������
//
//	cout << "���������ͬ������������:" << num << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
////ͳ����ͬ����Ԫ�س��ִ���