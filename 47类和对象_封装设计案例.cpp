//#include<iostream>
//using namespace std;
//
////�����������
////�����������������
////�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
//class Cube
//{
//public:
//
//	//���ó�
//	void setl(int l)
//	{
//		m_L = l;
//	}
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//	//���ÿ�
//	void setw(int i)
//	{
//		m_V = i;
//	}
//	//��ȡ��
//	int setwl()
//	{
//		return m_V;
//	}
//	//���ø�
//	void seth(int h)
//	{
//		m_H = h;
//	}
//	//��ȡ��
//	int sethl()
//	{
//		return m_H;
//	}
//	//��ȡ���������
//	int calculates()
//	{
//		return 2 * m_L * m_H + 2 * m_L * m_H + 2 * m_L * m_H;
//	}
//	//��ȡ���������
//	int calculateh()
//	{
//		return m_L * m_V * m_H;
//	}
//
//	//���ó�Ա�����ж������������Ƿ����
//	bool iSameByCalss(Cube &c)
//	{
//		if (m_L == c.getL() && m_V == c.setwl() && m_H == c.sethl())
//			return true;
//		else return false;
//	}
//private:
//	int m_L;//��
//	int m_V;//��
//	int m_H;//��
//	//����
//};
//
////����ȫ�ֺ����ж������������Ƿ����
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.setwl() == c2.setwl() && c1.sethl() == c2.sethl())
//		return true;
//	else return false;
//}
//int main()
//{
//	Cube C1;
//	C1.setl(10);
//	C1.setw(10);
//	C1.seth(10);
//	cout << "���������=" << C1.calculates() << endl;
//	cout << "���������=" << C1.calculateh() << endl;
//
//	//�����ڶ���
//	Cube C2;
//	C2.setl(10);
//	C2.setw(10);
//	C2.seth(10);
//	//����ȫ�ֺ����ж�
//	bool ret = isSame(C1, C2);
//	if (ret)
//	{
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else   cout << "c1��c2�ǲ���ȵ�" << endl;
//
//	//���ó�Ա�����ж�
//	ret = C1.iSameByCalss(C2);//C1���ã�ֻ��Ҫ��C2���бȽ�
//	if (ret)
//	{
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else   cout << "c1��c2�ǲ���ȵ�" << endl;
//	return 0;
//}
