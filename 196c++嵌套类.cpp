//#include<iostream>
//class Outside
//{
//public:
//	Outside()
//	{
//		std::cout << "�ⲿ���޲ι���" << std::endl;
//	}
//	~Outside()
//	{
//		std::cout << "�ⲿ����������" << std::endl;
//	}
//	Outside(int num)
//	{
//		this->m_Num = num;
//		std::cout << "�ⲿ���вι���" << std::endl;
//	}
//	int m_Num;
//public:
//	class Nested
//	{
//	public:
//		Nested()
//		{
//			std::cout << "Ƕ�׵��޲ι���" << std::endl;
//		}
//		~Nested()
//		{
//			std::cout << "Ƕ�׵���������" << std::endl;
//		}
//		Nested(int num)
//		{
//			this->z_Num = num;
//			std::cout << "Ƕ�׵��вι���" << std::endl;
//		}
//		int z_Num;
//	};
//	//����Ҳ����ֱ����Ƕ�������ڵ����ڴ���Ƕ�������
//	//Nested num;
//};
//void test01()
//{
//	Outside v(10);
//	std::cout << sizeof v << std::endl;
//	//����Ƕ�������,��ʹ���������������������������ĸ�����ܴ���
//	//Ƕ����ֻ�������ϵ�Ƕ�ף���������
//	//��Ϊ��Ƕ�����ǹ���Ȩ�ޣ����Կ������ⲿ���ʴ���
//	Outside::Nested num;
//	std::cout << sizeof num << std::endl;
//}
//int main() {
//	test01();
//}
