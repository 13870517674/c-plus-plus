//#include<iostream>
//#include<string>
//class Person
//{
//public:
//	Person() = default;
//
//	Person(int age, std::string name)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//
//	const Person& copy(Person& v)const
//	{
//		v.m_Age = this->m_Age;
//		v.m_Name = this->m_Name;
//		return *this;
//	}
//
//	void print()
//	{
//		std::cout << this->m_Age << " " << this->m_Name << std::endl;
//	}
//
//
//	int m_Age;
//	std::string m_Name;
//};
//void test01()
//{
//	Person v1{ 12,"����" };
//	Person v2;
//	Person v3;
//	Person v4;
//	Person v5;
//	//�������ʽ���
//	v1.copy(v2).copy(v3).copy(v4).copy(v5);
//	v5.print();
//
//	//�����޸ģ���Ϊ���صĶ�����Ȼ����const�������봫��Ĳ����޹أ�����ͨ�����صĶ��������ʽ��̡�
//	v5.m_Age = 20;
//	v5.print();
//}
//int main()
//{
//	test01();
//	return 0;
//}

//��Ԫ������
//#include<iostream>
//#include<fstream>
////�׳�
//long double factorial(size_t num)
//{
//	if (num == 1 || num == 0)return 1;
//	return num * factorial(num - 1);
//}
//
//class Person
//{
//	//ʹ����Ԫ�ú�����ֱ�ӷ�������˽��Ȩ��
//	friend int operator*(int i, Person& v);
//	friend std::ostream& operator<<(std::ostream& cout, Person& V);
//
//public:
//
//	Person(int age)
//	{
//		this->m_Age = age;
//	}
//
//	void print()
//	{
//		std::cout << this->m_Age << std::endl;
//	}
//private:
//	int m_Age;
//};
//
////ʹ��ȫ�ֺ������ؿ������Զ��������������ұߣ���������ȫ�ֶ�����
//int operator*(int i, Person& v)
//{
//	return i * v.m_Age;
//}
//
////�����������������þ�����ʽ���
//std::ostream& operator<<(std::ostream& cout, Person& V)
//{
//	cout << V.m_Age << " ";
//	return cout;
//}
//
//void test01()
//{
//	Person v(12);
//	std::cout << 5 * v << std::endl;
//}
//
//void test02()
//{
//	Person v(16);
//	//���������������
//	std::cout << v << std::endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

