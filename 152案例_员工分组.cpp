//#include<iostream>
//using namespace std;
//#include<vector>//�ṩvector����
//#include<string>//�ṩstring����
//#include<map>//�ṩmultimap����
//#include<ctime>//�ṩ�������
//enum ave//ʹ��ö��Ҫ�Ⱥ궨����
//{
//	CEHUA, MEISHU, YANFA//�߻� ���� �з�
//};
////#define CEHUA 0//�߻�
////#define MEISHU 1//����
////#define YANFA 2//�з�
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
////����ʼԱ��������ֵ
//void creatoWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHJK";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameSeed[i];//��Ա�����ָ�ֵ
//
//		worker.m_Salary = rand() % 10000 + 10000;//10000~19999 ��Ա�����ʸ�ֵ
//		//��Ա�����뵽������
//		v.push_back(worker);
//
//	}
//}
////Ա������
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����������ŵı��
//		int depId = rand() % 3;//0 1 2
//
//		//��Ա�����뵽������
//		//key�����ŵı�ţ�value�������Ա��
//		m.insert(make_pair(depId ,*it));//multimap m�������յ������v������ֵ
//
//	}
//}
////��ʾԱ��
//void showWorkerByGourp(multimap<int,Worker>&m)
//{
//	//0 A B C 1 D E 2 F G...
//	cout << "�߻�����:" << endl;
//
//	multimap<int,Worker>::iterator pos = m.find(CEHUA);//m����keyΪ0�ĵ�ַ����ֵ��pos������
//	int count = m.count(CEHUA);//ͳ�Ʋ߻����ž�������
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		//pos��������multimap<int,Worker>���͵ģ�first��key ������second��value ֵ�����Ե�posָ��second����value��ֵ,�Զ�����������.��ȡֵ
//		cout << "����:" << pos->second.m_Name << " ����:" << pos->second.m_Salary << endl;
//	}
//
//	cout << "--------------------" << endl;
//	cout << "��������" << endl;
//	//pos,count,index�������´�����
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU);
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "����:" << pos->second.m_Name << " ����:" << pos->second.m_Salary << endl;
//	}
//
//	cout << "--------------------" << endl;
//	cout << "�з�����" << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA);
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "����:" << pos->second.m_Name << " ����:" << pos->second.m_Salary << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//���������
//
//	//1.����Ա��
//	vector<Worker>vWorker;
//	creatoWorker(vWorker);
//
//	//2.Ա������
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3.������ʾԱ��
//	showWorkerByGourp(mWorker);
//	////����
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	//{
//	//	cout << "����=" << it->m_Name << "����" << it->m_Salary << endl;
//	//}
//	return 0;
//}