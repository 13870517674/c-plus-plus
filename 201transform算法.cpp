//#include<iostream>
//#include<vector>
//#include<iterator>
//#include<algorithm>
//#include<cmath>
//#include<functional>
//
//auto print(double a)
//{
//	return sqrt(a);
//}
//auto aver(double a, double b)
//{
//	return (a + b) / 2;
//}
//auto sum(double a, double b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	double num[5]{ 25,16,9,8,4 };
//	std::vector<double>v(num, num + 5);
//	std::ostream_iterator<int, char>co(std::cout, " ");
//	//�����㷨���������ǰ��˵������������Ҳ��������������ͬʱ��������sqrt��ֵ���
//	std::transform(v.begin(), v.end(), co, print);
//}
//void test02()
//{
//	double num[5]{ 25,16,9,8,4 };
//	double num2[5]{ 29,17,3,8,4 };
//	std::vector<double>v(num, num + 5);
//	std::vector<double>v2(num2, num2 + 5);
//	std::ostream_iterator<int, char>co(std::cout, " ");
//
//	//�����������ǰ���������ǵ�һ�������ķ�Χ�������������ǵڶ�����������ʼ�����ĸ��ǰ��˵��ĵط���������Ƿº���������ͨ��������
//	//�������������ƽ��ֵȻ����˵���������
//	std::transform(v.begin(), v.end(), v2.begin(), co, aver);
//	std::cout << std::endl;
//
//	//ͨ���������ǿ��Կ������ڶ���������û�б��ı䣬���ĸ������ž������˵���
//	for (auto i : v2) {
//		std::cout << i << " ";
//	}
//}
//void test03()
//{
//	double num[5]{ 25,16,9,8,4 };
//	double num2[5]{ 29,17,3,8,4 };
//	std::vector<double>v(num, num + 5);
//	std::vector<double>v2(num2, num2 + 5);
//	std::ostream_iterator<int, char>co(std::cout, " ");
//
//	//��test02һ����ֻ�����һ�������Ĳ�����һ��
//	std::transform(v.begin(), v.end(), v2.begin(), co, sum);
//	std::cout << std::endl;
//}
//void test04()
//{
//	double num[5]{ 25,16,9,8,4 };
//	double num2[5]{ 29,17,3,8,4 };
//	std::vector<double>v(num, num + 5);
//	std::vector<double>v2(num2, num2 + 5);
//	std::vector<double>v3(5);
//
//	//��test03һ����ֻ�ǵ��ĸ������Ĳ�����һ�������������Ͱ��˵��������������ǰ��˵������
//	std::transform(v.begin(), v.end(), v2.begin(), v3.begin(), sum);
//	//���Ǳ�������һ��������û������
//	for (auto i : v3) {
//		std::cout << i << " ";
//	}
//}
//void test05()
//{
//	int num[5]{ 1,2,3,4,5 };
//	int num1[5]{ 10,10,10,10,10 };
//
//	std::vector<int>v(num, num + 5);
//	std::ostream_iterator<int, char>co(std::cout, " ");
//	//���һ��������functionalͷ�ļ��ṩԭ�ͣ�Ҳ�����ڽ��������󣬻��߽�Ԥ���庯����
//
//	//ǰ������������ʾ������Χ����������ʾ��˵��������ǵ�ʹ���������������ַ���У����˵�coҲ��������������һ�������ṩ����㷨
//	std::transform(v.begin(), v.end(),num1, co, (std::multiplies<int>()));
//
//}
//int main()
//{
//	//һ���������˴�ӡ
//	//test01();
//
//	//��������ƽ��ֵ���˴�ӡ
//	//test02();
//
//	//���������ʹ�ӡ����
//	//test03();
//
//	//���������Ͱ�����һ������
//	//test04();
//
//	//�����������ݳ�2.5��Ȼ����˵���������
//	//test05();
//	return 0;
//}