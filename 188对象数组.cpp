//#include<iostream>
//#include<string>
//const int MAX = 5;
//
//enum class AV :int
//{
//	A=1,B,C,D
//};
//
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
//private:
//	int m_Age;
//	std::string m_Name;
//};
//
//void test01()
//{
//	//�����������鲢�ҳ�ʼ��
//	Person V[MAX]
//	{
//		Person(0,"��"),
//		Person(1,"�а�"),
//		Person(2,"�õ���"),
//		Person(3,"��������"),
//		Person(4,"ŶŶŶŶŶ")
//	};
//	
//	//ʹ��c++11�ķ�ʽ������������
//	for (Person v : V)
//	{
//		v.print();
//	}
//}
//
//void test02()
//{
//	Person v{ 12,"����" };
//	
//	Person V[MAX];
//
//	//ʹ�ö���ĳ�Ա�������������������Ԫ�ظ�ֵ
//	v.copy(V[0]);
//	//�����������Ԫ��
//	V[0].print();
//}
//
//void test03()
//{
//	//��ǿת�������ͣ���������ö�ٲ�����ʽ��ת��Ϊ����
//	std::cout << static_cast<int>(AV::A) << std::endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	//�޶�������ö��
//	test03();
//	return 0;
//}