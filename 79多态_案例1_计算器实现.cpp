//#include<iostream>
//#include<string>
//using namespace std;
//
////�ֱ�����ͨд���Ͷ�̬����ʵ�ּ�����
//
////��ͨд��
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Name1 + m_Name2;
//		}
//		else if (oper == "-")
//		{
//			return m_Name1-m_Name2;
//		}
//		else if (oper == "*")
//		{
//			return m_Name1 * m_Name2;
//		}
//		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
//		//����ʵ������	�ᳫ	����ԭ��
//		//����ԭ�򣺶���չ���п��������޸Ľ��йر�
//	}
//	int m_Name1;
//	int m_Name2;
//};
//
//void test01()
//{
//	//��������������
//	Calculator c;
//	c.m_Name1 = 10;
//	c.m_Name2 = 10;
//	cout << c.m_Name1 << "+" << c.m_Name2 << "=" << c.getResult("+") << endl;
//}
////���ö�̬ʵ�ּ�����
////��̬�ĺô�:
//// 1����֯�ṹ����
//// 2���ɶ���ǿ
//// 
////ʵ�ּ�����������
//class AbstractCalculator
//{
//
//public:
//	virtual int getResult()//��д��̬�������е���һ���麯����������ȥ��д��
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
////�ӷ���������
//class AddCalculate : public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////������������
//class NulCalculate : public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷���������
//class SulCalculate : public AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02()
//{
//	//��̬ʹ������
//	//����ָ���������ָ���������
//
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculate;//����,����һ�������ָ�룬ָ�򿪱ٵ�����һ������ĵ�ַ
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;//����
//
//	//��������
//	abc = new NulCalculate;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	//�˷�����
//	abc = new SulCalculate;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}