#include<ppl.h>//�ṩͷ�ļ�
#include<iostream>
#include<array>
using namespace concurrency;//�����㷨���ڴ������ռ�

int main() {
	
	concurrency::parallel_for(1,10, [](auto i) {
		std::cout << i<<' ';
		});
}