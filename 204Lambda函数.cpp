////lambda ���忴c++ prime plus P662-665
//#include<iostream>
//#include<algorithm>
//void print(int a)
//{
//	std::cout << "hello " << a << std::endl;
//}
//void test01()
//{
//	int num[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	//����ĵ���������ʹ��lamdba������Ҳ����������������
//	int a = std::count_if(num, num + 10, [](int a) {return a > 3; });
//	std::cout << a << std::endl;
//}
//void test02()
//{
//	int num[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	//��ʱ��v�൱���������lambda����������һ��ʹ��
//	auto v = [](int a) {return a > 3; };
//	int a = std::count_if(num, num + 10, v);
//	std::cout << a << std::endl;
//
//	//�������������������ͨ�ĺ���һ��������
//	bool temp = v(10);
//	std::cout << temp << std::endl;
//
//}
//int main()
//{
//	test01();
//	test02();
//}
////���������ô����ٽ��ܡ�

//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//int main()
//{
//	int n = 1;
//	std::vector<double> V(10);
//	for (auto& i : V) {
//		i = n++;
//	}
//	std::for_each(V.begin(), V.end(), [=](int i) {std::cout << i << ","; });
//	return 0;
//}
