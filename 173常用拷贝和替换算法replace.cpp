//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
////���õĿ������滻�㷨 replace
//class MyPrint
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(10);
//
//	cout << "�滻ǰ" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//	cout << "�滻��" << endl;
//
//	//��20�滻Ϊ200
//	replace(v.begin(), v.end(), 20, 200);//�ĸ���������ɵ�����Ķ�
//	//������ֵΪ20��Ԫ���滻Ϊ200
//	for_each(v.begin(), v.end(), MyPrint());
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

////�Զ�����������
//#include<iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//#include<vector>
//
//class Person
//{
//public:
//	Person() = default;
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//	bool operator==(const Person& val)//��Ԫν��
//	{
//		return this->m_Age == val.m_Age;
//	}
//	void operator=(const Person& p)//����=
//	{
//		this->m_Age = p.m_Age;
//	}
//};
//class Print
//{
//public:
//	void operator()(const Person& p)
//	{
//		cout << "����:" << p.m_Name << " ѧ��:" << p.m_Age << endl;
//	}
//};
//void test01()
//{
//	Person p1("a", 1);
//	Person p2("b", 3);
//	Person p3("c", 4);
//	Person p4("d", 1);
//	Person p5("e", 1000);
//
//	vector<Person>n;
//	n.push_back(p1);
//	n.push_back(p2);
//	n.push_back(p3);
//	n.push_back(p4);
//
//	cout << "�޸�ǰ" << endl;
//	for_each(n.begin(), n.end(), Print());//�º���
//
//	cout << "�޸ĺ�" << endl;
//	replace(n.begin(), n.end(), p4, p5);
//	for_each(n.begin(), n.end(), Print());//�º���
//}
//int main()
//{
//	test01();
//	return 0;
//}