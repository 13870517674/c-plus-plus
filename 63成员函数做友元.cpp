//#include<iostream>
//#include<iostream>
//using namespace std;
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//��visit�������Է���Building��˽�г�Ա
//	void visit2();//��visit2���������Է���Building��˽�г�Ա
//	Building* building;
//};
//
//class Building
//{
//	//���߱�����	GoodGay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
//	friend void GoodGay::visit2();
//public:
//	Building();
//public:
//	string m_SittingRoom;//����
//private:
//	string m_BedRoom;//����
//};
//
////����ʵ�ֳ�Ա����
//
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay:: visit()
//{
//	cout << "visit�������ڷ��ʣ�" << building->m_SittingRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//int main()
//{
//	test01();
//	return 0;
//}

//�Լ�ʵ��
//#include<iostream>
//#include<string>
//class Father;
//class Son
//{
//public:
//	Son();
//	void print();
//	~Son();
//	Father* father;
//private:
//	int m_Age;
//	std::string m_Name;
//};
//class Father
//{
//	friend void Son::print();
//public:
//	Father()
//	{
//		this->_m_Age = 0;
//		this->_m_Name = "";
//	}
//private:
//	int _m_Age;
//	std::string _m_Name;
//};
//
//Son::Son()
//{
//	this->m_Age = 0;
//	this->m_Name = "";
//	this->father = new Father;
//}
//void Son::print()
//{
//	std::cout << this->father->_m_Age << " " << this->father->_m_Name << std::endl;
//}
//Son::~Son()
//{
//	delete this->father;
//}
//int main()
//{
//	Son son;
//	son.print();
//}
////��Ա��������Ԫ������Ҫ�м������������������д�����һ����ĳ�Ա������Ҫ�������Ǹ��࣬Ȼ���ȴ�����Ҫ������һ���ࡣ
////��Ϊ�ȴ�����������������ʶ����Ԫ��Ȼ�󴴽���һ���࣬ע�������ʵ�֣���Ϊ�����ȴ������Ǹ��࣬��������֪����ô����