//#include<iostream>
//using namespace std;
//#include<fstream>//����ͷ�ļ�
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//void test01()
//{
//	//д�ļ���ofstream���������󣬶��ļ���ifstream����������
//	ifstream ifs2;//��д��Ķ��岻һ��
//	ifs2.open("�ļ�.txt", ios::in | ios::binary);
//	if (!ifs2.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return ;
//	}
//	Person p2;
//	ifs2.read((char*)&p2, sizeof(Person));
//	cout << "����=" << p2.m_Name << "����=" << p2.m_Age << endl;
//	ifs2.close();
//}
//
//int main()
//{
//	ofstream ofs("�ļ�.txt", ios::out | ios::binary);//�����������ͬʱ���ļ�
//	Person p= { "����", 18 };
//	ofs.write((const char*)&p, sizeof(Person));//������д��
//	ofs.close();
//	test01();//��ȡ�������
//	return 0; 
//}