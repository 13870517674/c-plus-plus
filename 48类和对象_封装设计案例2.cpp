//#include<iostream>
//#include<math.h>
////#include"class.h"
//using namespace std;
//
////���Բ��ϵ����
//
////����
//class Point
//{
//public:
//	//����x
//	void setX(int x)
//	{
//		m_x = x;
//	}
//	//��ȡx
//	int getX()
//	{
//		return m_x;
//	}
//	//����y
//	void setY(int y)
//	{
//		m_y = y;
//	}
//	//��ȡy
//	int getY()
//	{
//		return m_y;
//	}
//private:
//	int m_x;
//	int m_y;
//};
//
////Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//�뾶
//
//	//�����������һ������Ϊ�����еĳ�Ա
//	Point m_Center;//Բ��
//};
//
////�жϵ��Բ��ϵ
//void isinCircle(Circle& c, Point& p)
//{
//	//��������֮��ľ��룬ƽ��
//	int distance= pow((c.getCenter().getX() - p.getX()), 2) + pow((c.getCenter().getX() - p.getX()), 2);
//	//����뾶��ƽ��
//	int rDistance = pow((c.getR()), 2);
//	if (distance == rDistance)cout << "����Բ��" << endl;
//	else if (distance > rDistance)cout << "����Բ��" << endl;
//	else cout << "����Բ��" << endl;
//}
//int main()
//{
//	Circle c;
//	c.setR(10);//�뾶
//	Point center;
//	center.setX(10);
//	center.setY(10);
//	c.setCenter(center);//��Բ�ĸ�ֵx���y��
//	//������
//	Point p;
//	p.setX(10);
//	p.setY(10);
//	//�жϹ�ϵ
//	isinCircle(c, p);
//	return 0;
//}