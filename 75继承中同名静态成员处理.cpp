//#include<iostream>
//using namespace std;
//
////�̳��е�ͬ����̬��Ա����ʽ
//class Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base-static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base=" << a << endl;
//	}
//};
//int Base::m_A = 100;//��̬��ԱҪ���ⲿ��ʼ��
//
//class Son :public Base
//{
//public:
//	static void func()
//	{
//		cout << "Son-static void func()" << endl;
//	}
//	static int m_A;
//};
//int Son::m_A = 200;
//
////ͬ����̬��Ա����
//void test01()
//{
//	//1.ͨ���������
//	Son s;
//	cout << "ͨ������ķ���" << endl;
//	cout << "Son m_A=" << s.m_A << endl;//200,��ӡ�������
//	cout << "Base m_A=" << s.Base::m_A << endl;//100���������������ӡ�ĸ����
//	//2.ͨ����������
//	cout << "ͨ����������" << endl;
//	cout << "Son��m_A=" << Son::m_A << endl;
//	cout << "Base��m_A=" << Base::m_A << endl;
//	//��һ��::����ͨ�������ķ�ʽ����	�ڶ���::������ʸ�����������
//	cout << "Base��m_A=" << Son::Base::m_A << endl;
//}
//
////ͬ����̬��Ա����
//void test02()
//{
//	//1.ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//2.ͨ����������
//	cout << "ͨ����������" << endl;
//	Son::func();//��������
//	Son::Base::func();//ͨ��������ʸ���
//	Base::func();//ֱ�ӷ��ʸ���
//
//	//����͸������ͬ����̬��Ա������Ҳ�����ص�����������ͬ����Ա����
//	//�������ʸ����б�����ͬ����Ա����Ҫ��������
//	Son::Base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
////ͬ����̬��Ա����ʽ�ͷǾ�̬һ����ֻ���������ַ��ʷ�ʽ(ͨ�����������)
////�Ǿ�ֻ̬��ͨ������