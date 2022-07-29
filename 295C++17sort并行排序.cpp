#include<iostream>
#include<random>
#include<algorithm>
#include <execution>//�ṩִ�в���

int main() {
	std::mt19937 rand(time(0));
	std::vector V(1000, 0);
	for (auto& i : V)
		i = rand();

	std::sort(std::execution::par, V.begin(), V.end(), [](auto a, auto b) {
		return a > b;
		});

	for (auto i : V)
		std::cout << i << std::endl;
}
/*��Ҳ��������STL�㷨���ݲ�ͬ�� ִ�в���(execution policies) ��Ϊ��һ�������� ���Ƕ�����ͷ�ļ�<execution>�С� ��ִ�в����г������б�׼�� ִ�в��� ��
���� 	����
std::execution::seq 	˳��ִ��
std::execution::par 	���л�˳��ִ��
std::execution::par_unseq 	���л�����ʸ������ִ��*/