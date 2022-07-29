#include<iostream>
#include<vector>
#include<type_traits>
#include<string>
#include<algorithm>

void function() {};

auto func() ->std::vector<int> {
	return { 1,2,3,4,5,6 };
}

auto func2() {
	return std::vector<int>(10, 100);
}

template<typename T>
void demo2(T& n) {
	std::cout << typeid(std::decay_t<T>).name() << std::endl;
}

template<typename T>
void demo2_(T& n) {
	std::cout << typeid(T).name() << std::endl;
}

template<typename T>
void demo3(T& n) {
	std::cout << typeid(std::decay_t<T>).name() << std::endl;
}
template<typename T>
void demo3_(T& n) {
	std::cout << typeid(T).name() << std::endl;
}

int main() {
	int num[10]{ 0 };

	std::vector<int>test(func());
	for (auto i : test)std::cout << i << ' ';
	std::cout << std::endl;

	std::vector<int>test2(func2());
	for (auto i : test2)std::cout << i << ' ';
	std::cout << std::endl;

	std::cout << typeid(std::common_type_t<int, double, float>).name() << std::endl;
	std::cout << typeid(std::common_type_t<std::string, std::string>).name() << std::endl;

	//decay_t��	���鵽ָ�룬����������ָ�룬remove_cvref
	demo2(num);
	demo2_(num);
	//���ǿ��Կ�������ӡ�Ľ��	δʹ��decay_t˥�˵�������int[10] ʹ���˵���int* ��ס��ʹ�����ò����Ƶ�
	demo3(function);
	demo3_(function);
	//��Ԥ�ϵ����һ�� �ٴ�ǿ������ʹ������

	//����һ����Щ���������Ƶ��������͵� ��������д������ֻ��Ϊ��˵�����ǵ����� ��������
}