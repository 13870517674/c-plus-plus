//#include<iostream>
//using namespace std;
////������
//class Animal 
//{
//public:
//	int m_Age;
//};
////������̳� ������μ̳е�����
////�ڼ̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
////Animal���Ϊ�����
//
////����
//class Sheep:virtual public Animal{};
//
////����
//
//class Tuo:virtual public Animal{};
//
////������
//class SheepTuo:public Sheep,public Tuo{};
//
//void test01()
//{
//	SheepTuo st;
//	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ��������������
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 20;
//	cout << "st.Sheep::m_Age=" << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age=" << st.Tuo::m_Age << endl;
//	cout<<"st.m_Age="<<st.m_Age << endl;//��̳в���Ҫ��������ֻ��һ������
//	//�����������֪��	ֻ��һ�ݾͿ��ԣ����μ̳е������������ݣ���Դ�˷�
//}
//int main()
//{
//	test01();
//	return 0;
//}