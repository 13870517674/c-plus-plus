#include<iostream>
#include<type_traits>
template<typename T>
concept Integral = std::is_integral<T>::value;//����bool���ͣ������Ƿ�Ϊintegral

template<Integral T>
T inc(T a)
{
    return ++a;
}

int main(int argc, const char* argv[])
{
    int a = 0;
    std::cout << inc(a) << std::endl;
    return 0;
}
