//#include<iostream>
//using namespace std;
//#include<vector>
//#include<deque>
//#include<string>
//#include<algorithm>
//#include<ctime>
////有5名选手ABCDE，10个评委分别对待每一名选手打分，去除最高分，去除评委中最低分，取平均分
////选手类
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
//void createPerson(vector<Person>& v)//初始化武鸣选手
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//		Person p(name, score);
//
//		//将创建的Person对象 放入到容器中
//		v.push_back(p);
//	}
//}
//
////打分
//void setScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)//一轮计算一个选手的平均分
//	{
//		//将评委分数 放入deque容器中
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;  //60~100
//			d.push_back(score);
//		}
//
//		cout << "选手:" << it->m_Name << "打分:" << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit << " ";
//		}
//		cout << endl;
//		//先排序
//		sort(d.begin(), d.end());
//
//		//去除最高分和最低分
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;//累加每个评委的分数
//		}
//		int avg = sum / d.size();
//
//		//将平均分 赋值到选手身上
//		it->m_Score = avg;
//
//	}
//}
//
//void showScore(vector<Person>&p)
//{
//	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
//	{
//		cout << "姓名:" << it->m_Name << "成绩:" << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));//使用随机数种子
//
//	//1、创建5名选手
//	vector<Person>v;//存放选手容器
//	createPerson(v);
//
//	//2、给5名选手打分
//	setScore(v);
//
//	//3、显示最后得分
//	showScore(v);
//
//	/*测试*/
//	/*createPerson(v);
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名:" << (*it).m_Name << "分数:" << (*it).m_Score << endl;
//	}*/
//	return 0;
//}