//#include<iostream>
//using namespace std;
////��̬����2 ������Ʒ��
//class AbstractDrinking
//{
//public:
//	//��ˮ�����麯��
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void putSomething() = 0;
//	//������Ʒ
//	void makeDerink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		putSomething();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ�����麯��
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void putSomething()
//	{
//		cout << "����ţ�̺���" << endl;
//	}
//};
//
////������Ҷ
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ�����麯��
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void putSomething()
//	{
//		cout << "�����������" << endl;
//	}
//};
////��������
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDerink();
//	delete abs;//�ͷ�
//}
//
//void test01()
//{
//	//��������
//	doWork(new Coffee);//new�����ڴ�ռ䣬����ֵ�ǿռ�ĵ�ַ����������Ҳ��ָ�룬����ֱ�Ӵ��ݾ���
//	cout << "-------------" << endl;
//	//������Ҷ
//	doWork(new Tea);
//}
//int main()
//{
//	test01();
//	return 0;
//}