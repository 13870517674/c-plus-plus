//#include<iostream>
//using namespace std;
//#include<deque>
////deque���������ɾ��
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////���˲���
//void test01()
//{
//	deque<int>d1;
//	//β��
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//ͷ��
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//
//	//βɾ
//	d1.pop_back();
//	
//	//ͷɾ
//	d1.pop_front();
//
//	printDeque(d1);
//}
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//
//	//insert���룬������
//	d1.insert(d1.begin(), 100);
//	printDeque(d1);
//	//���ذ汾,������
//	d1.insert(d1.begin(),2, 1000);//������������������������ֵ
//	printDeque(d1);
//
//	//����������в���
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());//��d1��degin��ʼ����,��������ݷ�Χ��ʣ������������Ҳ���ǰ�d2�������ݲ��뵽d1
//	printDeque(d1);
//
//}
//
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//
//	//ɾ��
//	deque<int>::iterator it = d1.begin();//������ָ����ǰ�d1��һ��Ԫ��
//	it++;//+1���ǵڶ���Ԫ��
//	d1.erase(it);//ɾ���ڶ���
//	//200 10 20
//	printDeque(d1);
//
//	//�����䷽ʽɾ��
//	d1.erase(d1.begin(), d1.end());
//	//���
//	d1.clear();
//	printDeque(d1);
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}