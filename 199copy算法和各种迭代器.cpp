//#include<iostream>
//#include<iterator>
//#include<string>
//#include<array>
//#include<fstream>
//#include<vector>
//
//void test01()
//{
//	std::array<std::string, 5>name{ "1a","2a","3a","4a","5a" };
//	std::array<std::string, 5>temp;
//	//copy�㷨������������ǰ������ʾ������Χ����������ʾ���������������׵�ַ������ֱ��ʹ��ָ������������������Ϊ������ʵ�����Ƿ��͵�ָ��ȣ�����Ļ����������˽�
//	std::copy(name.begin(), name.end(), temp.begin());
//	for (auto i : temp) {
//		std::cout << i << std::endl;
//	}
//
//	//Ȼ�����ǲ�����ͨ����������
//	int num1[5]{ 1,2,3,4,5 }, num2[5]{ 0 };
//	//��num1������num2
//	std::copy(num1, num1 + 6, num2);
//	for (auto i : num2) {
//		std::cout << i << std::endl;
//	}
//}
//void test02()
//{
//	//ʹ��ostream_iteratorģ�崴��cout_iter����������ʼ����һ�����������������󣬵ڶ����Ǵ�ӡ�ո�ֻ��Ϊ�˷��͵��������ʱ��ָ�һ��
//	std::ostream_iterator<std::string>cout_iter(std::cout);
//
//	std::array<std::string, 5>name{ "1a","2a","3a","4a","5a" };
//
//	//copyʹ��cout_iter�ӿ��������������ڵ����ݸ��Ƶ��������У����մ�ӡ����
//	std::copy(name.begin(), name.end(), cout_iter);
//
//	//��ȻҲ����ʹ����������	��ʵûʲô��ͬ���޷Ǿ���ûд���֣��Ѵ�������Ĳ���д��copy������
//	//std::copy(name.begin(), name.end(), std::ostream_iterator<std::string, char>(std::cout, " "));
//}
//void test03()
//{
//	std::array<std::string, 5>temp;
//	//ʹ��istream_iteratorģ�崴��������	���ﶼʹ������������������������ʾ��������Χ,��ҪCtrl+z+Enter������Windows�����±�ʾEOF,�ﵽ��ĩβ�˳�����Ȼһֱ�����Խ��
//	std::copy(std::istream_iterator<std::string>(std::cin), std::istream_iterator<std::string>(), temp.begin());
//	for (auto i : temp) {
//		std::cout << i << std::endl;
//	}
//}
//void test04()
//{
//	std::fstream fstr("�ʼ�.md");
//	//��֮ǰ��ͬ��������ʹ�õ����ļ������󣬶����Ǳ�׼������cout
//	std::ostream_iterator<std::string>cout_iter(fstr);
//
//	std::array<std::string, 5>name{ "1a","2a","3a","4a","5a" };
//
//	//�������ļ�����
//	std::copy(name.begin(), name.end(), cout_iter);
//	//���������ȡ���ݵ���������
//	std::array<std::string, 5>temp;
//
//	fstr.close();
//	//�����Ϊɶ����֮��ȡ����
//	std::ifstream ifs("�ļ�.md");
//	//һ���ģ���֮ǰʹ�õı�׼����������cin���������ǵĶ��ļ�������
//	std::copy(std::istream_iterator<std::string>(ifs), std::istream_iterator<std::string>(), temp.begin());
//	//����temp�ڱ�����ӡ
//	for (auto i : temp) {
//		std::cout << i << std::endl;
//	}
//
//	ifs.close();
//}
//void test05()
//{
//	int num[5]{ 1,2,3,4,5 };
//	//��ʼ��arr������ǰ���ٴ��5��Ԫ�ص��ڴ�
//	std::vector<int>arr(5);
//
//	//�Ȱ������ֵ������������
//	std::copy(num, num + 5, arr.begin());
//	//�����ӡ�ո����ָ��Ȼ�޷����
//	std::ostream_iterator<int,char>cout_ar(std::cout," ");
//	std::cout << std::endl;
//	//�������
//	std::copy(arr.rbegin(), arr.rend(), cout_ar); 
//
//	//ͨ�����������������ó�������	�ص������������ִ�е�������ݼ�
//	std::vector<int>::reverse_iterator ri;
//	//����һ����������ķ�ʽ��ͬ������ʹ�õ���һ���µĵ�����reverse_iterator��forѭ������
//	for (ri = arr.rbegin(); ri != arr.rend(); ++ri) {
//		std::cout << *ri << " ";
//	}
//}
//int main()
//{
//	//������copy����
//	//test01();
//
//	//�����������
//	//test02();
//
//	//���������ݿ�����������
//	//test03();
//
//	//ʹ�ö�дģʽ��array��������ݿ������ļ���
//	test04();
//
//	//copy������vector�����͵����������һ��������
//	//test05();
//	return 0;
//}
////�ܽ�:�ܹ��ᵽ��iteratorͷ�ļ������ֵ�����