#include <iostream>
#include <vector>
#include <numeric>  // for reduce()
#include <execution>

void printSum(size_t num)
{
	// ����������1 2 3 4����coll��
	std::vector<size_t> coll;
	coll.reserve(num * 4);
	for (long i = 0; i < num; ++i) {
		coll.insert(coll.end(), { 1, 2, 3, 4 });
	}

	auto sum = std::reduce(std::execution::par, coll.begin(), coll.end(), 0L);//��һ�����������ʾ����
	std::cout << "reduce():     " << sum << '\n';
}

int main()
{
	printSum(1);
	printSum(1000);
	printSum(1000000);
	printSum(10000000);
}