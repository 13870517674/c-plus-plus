//#include<iostream>
//using namespace std;
//#include<fstream>//ͷ�ļ�����
//#include<string>
////�ı��ļ� ���ļ�
//
//void test01()
//{
//	//1������ͷ�ļ�
//
//	//2������������
//	ifstream ifs;
//	//3�����ļ����ж��Ƿ�򿪳ɹ�
//	ifs.open("�ļ�.txt",ios::in);
//	if (ifs.is_open()==NULL)
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return ;
//	}
//	//4��������
//
//	//��һ��
//	char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}
//	//�ڶ���
//	char buf2[1024] = { 0 };
//	while (ifs.getline(buf2, sizeof(buf2)))
//	{
//		cout << buf2 << endl;
//	}
//	//������
//	string buf3;
//	while (getline(ifs, buf3))
//	{
//		cout << buf3 << endl;
//	}
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)//���Ƽ�
//	{
//		cout << c;
//	}
//
//	ifs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}