//#include<iostream>
//#include<iomanip>
//#include<string>
//#include"conio.h"
//#include"windows.h"
//#include<vector>
//#include<Windows.h>
//using namespace std;
//
////����ö��
////�޶�������ö������!!!
////1��ö��������ö�ٳ�Ա�����Ϳ�����ʽָ����ָ����ʽ����ö���������ƺ��ð�ź�ö�ٳ�Ա���͡�
//enum class MOVE :int
//{
//
//	UP = 72,//����
//	DOWN = 80,//����
//	LEFT = 75,//����
//	RIGHT = 77//����
//};
//
//int main()
//{
//
//	HANDLE hOut;
//	COORD pos = { 1,1 };
//	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//	CONSOLE_CURSOR_INFO CursorInfo;
//	GetConsoleCursorInfo(hOut, &CursorInfo);//��ȡ����̨�����Ϣ
//	CursorInfo.bVisible = false; //���ؿ���̨���
//	SetConsoleCursorInfo(hOut, &CursorInfo);//���ÿ���̨���״̬
//
//	int x = 0;
//	int y = 0;
//	char c;
//	while (true)
//	{
//		c = _getch();
//		switch (c)
//		{
//		case (int)MOVE::UP: //�� 
//		{
//			if (x > 1)
//			{
//				x--;
//			}
//			break;
//		}
//		case (int)MOVE::DOWN://��
//		{
//			if (x < 8)
//			{
//				x++;
//			}
//			break;
//		}
//		case (int)MOVE::LEFT://��
//		{
//			if (y > 1)
//			{
//				y--;
//			}
//			break;
//		}
//		case (int)MOVE::RIGHT://��
//		{
//			if (y < 8)
//			{
//				y++;
//			}
//			break;
//		}
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			for (int j = 0; j < 10; j++)
//			{
//				if (i == 9 || i == 0 || j == 9 || j == 0 || (i == y && j == x))
//				{
//					pos.X = i * 2;
//					pos.Y = j;
//					SetConsoleCursorPosition(hOut, pos);
//					cout << "��";
//				}
//				else
//				{
//					pos.X = i * 2;
//					pos.Y = j;
//					SetConsoleCursorPosition(hOut, pos);
//					cout << "  ";
//				}
//			}
//			cout << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
