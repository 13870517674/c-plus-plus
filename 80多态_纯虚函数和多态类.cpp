//#include<iostream>
//using namespace std;
//
////���麯���ͳ�����
//class Base
//{
//public: 
//	//���麯��
//	//ֻҪ��һ�����麯����������Ϊ������
//	//�������ص�
//	//1���޷�ʵ��������
//	//2����������������Ҫ��д�����д��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//
//class Son : public Base
//{
//public:
//	virtual void func()//�����virtual�ؼ��ֿ���ʡ��
//	{
//		cout << "func()��������" << endl;
//	}
//};
//
//class Aon : public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func()��������,Aon��" << endl;
//	}
//};
//
//void ave(Base& a)
//{
//	a.func();
//}
//void test01()
//{
//	//Base b;//���������޷�ʵ��������
//	//new Base;
//	Son s;//�������Ҫ��д�����д��麯���������޷�ʵ��������
//
//	Base* base = new Son;//ָ��ʹ�ö�̬
//	base->func();
//	delete base;
//
//	Aon a;
//	ave(a);//����ʹ�ö�̬
//}
//int main()
//{
//	test01();
//	return 0;
//}
/*�������麯�������Ϊ�����ࣨAbstract Class���� ֮����˵����������Ϊ���޷�ʵ������
Ҳ�����޷��������� ԭ������ԣ����麯��û�к����壬���������ĺ������޷����ã�
Ҳ�޷�Ϊ������ڴ�ռ䡣*/