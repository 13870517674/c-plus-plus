//#include<iostream>
//using namespace std;
//#include<fstream>//ͷ�ļ�����
////�ı��ļ� д�ļ�
//
//int main()
//{
//	//1������ͷ�ļ�
//	//2������������
//	ofstream ofs;
//
//	//3��ָ���򿪷�ʽ
//	ofs.open("�ļ�.txt", ios::out);
//	//4��д����
//	ofs<< "����:����" << endl;
//	ofs<< "�Ա�:��" << endl;
//	ofs<< "����:18" << endl;
//	//5���ر��ļ�
//	ofs.close();
//	return 0;
//}
//�߶���д
//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//int main()
//{
//	ifstream ifs;
//	ifs.open("�ļ�.txt", ios::in);
//	if (ifs.is_open() == NULL)
//	{
//		cout << "��ʧ��" << endl;
//		return 0;
//	}
//	ofstream ofs;
//	ofs.open("�ļ�2.txt", ios::out);
//	char ch[1024] = { 0 };
//	while (ifs >> ch)//�߶�ȡ���ݱ�д������
//	{
//		cout << ch << endl;
//		ofs << ch << endl;
//	}
//
//	ifs.close();//�رն�ȡ�ļ�
//	ofs.close();//�ر�д���ļ�
//	return 0;
//}
