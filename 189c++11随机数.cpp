#include<iostream>
#include<random>

int main()
{
    std::default_random_engine random(time(NULL));//�������������
    std::uniform_int_distribution<int> u(0, 100);//���÷�Χ
    for (int i = 0; i < 20; ++i)
        std::cout << u(random) << ' ';
    std::cout << std::endl;

    return 0;
}