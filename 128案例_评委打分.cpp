//#include<iostream>
//using namespace std;
//#include<vector>
//#include<deque>
//#include<string>
//#include<algorithm>
//#include<ctime>
////��5��ѡ��ABCDE��10����ί�ֱ�Դ�ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����
////ѡ����
//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//	string m_Name;
//	int m_Score;
//};
//
//void createPerson(vector<Person>& v)//��ʼ������ѡ��
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//
//		int score = 0;
//		Person p(name, score);
//
//		//��������Person���� ���뵽������
//		v.push_back(p);
//	}
//}
//
////���
//void setScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)//һ�ּ���һ��ѡ�ֵ�ƽ����
//	{
//		//����ί���� ����deque������
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;  //60~100
//			d.push_back(score);
//		}
//
//		cout << "ѡ��:" << it->m_Name << "���:" << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit << " ";
//		}
//		cout << endl;
//		//������
//		sort(d.begin(), d.end());
//
//		//ȥ����߷ֺ���ͷ�
//		d.pop_back();
//		d.pop_front();
//
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;//�ۼ�ÿ����ί�ķ���
//		}
//		int avg = sum / d.size();
//
//		//��ƽ���� ��ֵ��ѡ������
//		it->m_Score = avg;
//
//	}
//}
//
//void showScore(vector<Person>&p)
//{
//	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
//	{
//		cout << "����:" << it->m_Name << "�ɼ�:" << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));//ʹ�����������
//
//	//1������5��ѡ��
//	vector<Person>v;//���ѡ������
//	createPerson(v);
//
//	//2����5��ѡ�ִ��
//	setScore(v);
//
//	//3����ʾ���÷�
//	showScore(v);
//
//	/*����*/
//	/*createPerson(v);
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����:" << (*it).m_Name << "����:" << (*it).m_Score << endl;
//	}*/
//	return 0;
//}