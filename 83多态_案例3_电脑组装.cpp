//#include<iostream>
//using namespace std;
//
////����ͬ�����
////����CPU��
//class CPU
//{
//public:
//	//����ļ��㺯��
//	virtual void calculate() = 0;
//};
////�����Կ���
//class VideoCard
//{
//public:
//	//�������ʾ����
//	virtual void display() = 0;
//};
////�����ڴ�����
//class Memory
//{
//public:
//	//����Ĵ洢����
//	virtual void calculate() = 0;
//};
//
////������
//class Computer
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	//�ṩ�����������ͷŵ������
//	~Computer()
//	{
//		//�ͷ�CPU
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		//�ͷ��Կ�
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		//�ͷ��ڴ���
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	 }
//
//	//�ṩ��������
//	void word()
//	{
//		m_cpu->calculate();
//		
//		m_vc->display();
//
//		m_mem->calculate();
//	}
//private:
//	CPU* m_cpu;//cpu�����ָ��
//	VideoCard* m_vc;//�Կ����ָ��
//	Memory* m_mem;//�ڴ������ָ��
//};
//
////���峧��
////intel����
//class intelCPU :public CPU
//{
//public:
//	virtual void calculate()//������д����
//	{
//		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class intelVoideoCard :public VideoCard
//{
//public:
//	virtual void display()//������д����
//	{
//		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class intelMemory :public Memory
//{
//public:
//	virtual void calculate()//������д����
//	{
//		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
////Lenovo
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()//������д����
//	{
//		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//
//class LenovoVoideoCard :public VideoCard
//{
//public:
//	virtual void display()//������д����
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void calculate()//������д����
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//
//void test01()
//{
//	//��һ̨���Ե����
//	CPU* intelcpu = new intelCPU;
//	VideoCard* intelCard = new intelVoideoCard;
//	Memory* intelMem = new intelMemory;
//
//	//������һ̨����
//	Computer* computer = new Computer(intelcpu, intelCard, intelMem);
//	computer->word();
//	delete computer;
//
//	cout<<"------------------------------------"<<endl;
//	cout << "�ڶ�̨���Կ�ʼ����" << endl;
//	//�����ڶ�̨����
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVoideoCard, new LenovoMemory);
//	computer2->word();
//	delete computer2;
//}
//int main()
//{
//	test01();
//	return 0;
//}