#include<iostream>
#include<string>
#include<format>
int main() {
	auto a = std::format("����:{} ����:{} ���:{}", "ɵ��", 123, 51.2);//�ַ���ƴ��
	std::cout << a << std::endl;

	std::string s{ std::format("1 {}",12.1) };
	std::cout << s << std::endl;

	char c = 120;
	auto s0 = std::format("{:6}", 42);    // s0 ��ֵΪ "    42"
	auto s1 = std::format("{:6}", 'x');   // s1 ��ֵΪ "x     "
	auto s2 = std::format("{:*<6}", 'x'); // s2 ��ֵΪ "x*****"
	auto s3 = std::format("{:*>6}", 'x'); // s3 ��ֵΪ "*****x"
	auto s4 = std::format("{:*^6}", 'x'); // s4 ��ֵΪ "**x***"
	auto s5 = std::format("{:6d}", c);    // s5 ��ֵΪ "   120"
	auto s6 = std::format("{:6}", true);  // s6 ��ֵΪ "true  "

}