#include <ppl.h>
#include <random>
#include <iostream>

using namespace concurrency;

int wmain()
{
    //std::mt19937��α����������������ڲ��������ܵ�������� C++11����
    std::vector<int> values(25000);
    //std::generate����㷨������������Χ�ڵ����ݣ�������������һ���ɵ��ö��󣬶����ǽ��в���,��������ʹ�õ�mt19937������������и�ֵ
    std::generate(begin(values), end(values), std::mt19937(std::random_device()()));
    concurrency::parallel_sort(begin(values), end(values));

    // Print a few values.
    std::wcout << "V(0)        = " << values[0] << std::endl;
    std::wcout << "V(12500000) = " << values[12500] << std::endl;
    std::wcout << "V(24999999) = " << values[24999] << std::endl;
}