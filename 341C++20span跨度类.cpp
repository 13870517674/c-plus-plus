#include<iostream>
#include<span>
#include<vector>
#include<string>

template<typename T>
void print(std::span<T>span)noexcept {
	for (const auto& i : span)
		std::cout << i << ' ';
	std::cout << std::endl;
	std::cout << span.size() << std::endl;
}

int main() {
	std::vector v{ 1,2,3,4,5,6,7,8 };
	int n[]{ 1,2,3,4,5,6,7,8,9,10 };
	std::vector<std::string>s{ "**", "@@", "&&"};
	print<int>(v);
	print<int>(n);
	print<std::string>(s);
	//span����ʵ��ֻ����������Ա��ָ�� T ��ָ��ʹ�С��
	//view���󣬲�ӵ������Ȩ��������
	//����ʼ��ַ�ͳ��Ȱ�װ��һ�𣬱�����©��
}