#include<ppl.h>
#include<iostream>
#include<thread>
using namespace concurrency;
int main() {
	//���ǿ�����parallel_invoke�������ж������ÿһ�����񶼻Ὺ��һ���߳�
	concurrency::parallel_invoke(
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; },
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; },
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; },
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; },
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; },
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; },
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; },
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; },
		[] {_sleep(1000); std::cout << std::this_thread::get_id() << std::endl; }
		);
}