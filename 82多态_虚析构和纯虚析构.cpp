//#include<iostream>
//#include<string>
//using namespace std;
//
////�������ʹ��麯��
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯���ĵ���" << endl;
//	}
//	//�������������ĳ��������ͻ��������е���������
//	//�������������Խ��	����ָ���ͷ��������ʱ���ɾ�������
//	virtual ~Animal()
//	{
//		cout << "Animal���������ĵ���" << endl;
//	}
//
//	//��������	��Ҫ����Ҳ��Ҫʵ��
//	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
//	virtual ~Animal() = 0;
//
//	//���麯��
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()//����������Ҫ�о����ʵ��
//{
//	cout << "Anima������������" << endl;
//}
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat�Ĺ��캯������" << endl;
//		m_Name=new string(name);
//	}
//	virtual void speak()
//	{
//		cout <<*m_Name<< "Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//		cout << "Cat��������������" << endl;
//	}
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//����ָ����������ʱ�� �����������������������������������ж������ԣ������ڴ�й©
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
/*�������ʹ�������
1�������Խ������ָ���ͷ��������
2������Ҫ�о���ĺ���ʵ��
����:
���������������ڳ����࣬�޷�ʵ��������
�������﷨:virtual ~����(){}
���������﷨:virtual~����()=0
����������ʵ����Ҫ���ⲿ����������ʵ�֣��ο�28��*/