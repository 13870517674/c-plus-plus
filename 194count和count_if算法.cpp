//#include<iostream>
//#include<algorithm>
//#include<array>
//
//bool show(int a)
//{
//	return a > 5;
//}
//
//void test01()
//{
//	std::array<std::string, 3>str{ "����", "����", "����" };
//	//count����ֵ���ң��ҵ��ͷ���ֵ��ͬ������
//	int num = std::count(str.begin(), str.end(), "����");
//	std::cout << num << std::endl;
//}
//void test02()
//{
//	int num[5]{ 1,2,2,2,3 };
//	int i = std::count(num, num + 5, 2);
//	std::cout << i << std::endl;
//}
//
//void test04()
//{
//	int num[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	//����������������ν��Ҳ��������ͨ���������շ��ش���5����������
//
//	//Ҳ���Զ��Զ����������ͽ��в�����������Ҫ���رȽ������������Ͳ�д������
//	int a = std::count_if(num, num + 10, show);
//	std::cout << a << std::endl;
//}
//int main()
//{
//	//��string����
//	test01();
//	//����ͨ����
//	test02();
//
//	//count_if
//	test04();
//}