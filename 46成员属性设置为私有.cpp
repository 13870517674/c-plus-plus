//#include<iostream>
//#include<string>
//using namespace std;
//
////��Ա��������Ϊ˽��
////1.���������Լ����ƶ�дȨ��
////2.����д����Լ�����ݵ���Ч��
//
////�������
//class Person
//{
//public:
//	//��������
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	//��ȡ����
//	string getname()
//	{
//		return m_name;
//	}
//	//��ȡ����
//	
//	void go_age(int age)//д�����䣬��������
//	{
//		if (age < 150 && age>0)m_age = age;
//		else m_age = 0; puts("�����������!!");
//	}
//    int getage()
//	{
//		return m_age;
//	}
//	void lovename(string name)
//	{
//		m_m_lover = name;
//	}
//	string getlover()
//	{
//		return m_m_lover;
//	}
//	//�������� ֻд
//
//private:
//	string m_name;//����	�ɶ���д
//	int m_age;//����	ֻ��
//	string m_m_lover;//����	ֻд
//};
//int main()
//{
//	Person p;
//
//	p.setname("����");
//	p.lovename("�־�");
//	p.go_age(-1);
//	cout << "����Ϊ:" << p.getlover() << endl;
//	cout << "����Ϊ:" << p.getname() << endl;
//	cout << "����Ϊ:" << p.getage() << endl;
//	//�ܹ�����Ȩ����6��������ÿ���������ֱ���һ����Ա�Ķ���д
//
//	//ע�ⲻ�øе����ӣ�������˽�еģ�����ֻҪд������������һ����һ��д��
//    //Ҳ����main����������Ļ��������ǰ�������ڵĺ����ǹ���Ȩ�ޣ������ܷ��ʾ��С�
//	return 0;
//}