#include<iostream>
template<typename... Args>
auto left_sub(Args&&... args) {
    return (... - args);//���۵�
}

template<typename... Args>
auto right_sub(Args&&... args) {
    return (args - ...);//���۵�
}

template<typename...Args>
auto print(Args&&...args) {
    (std::cout << ... << args) << std::endl;//��ӡ������۵����ʽ��ʹ��С����
}
int main() {
    auto a = left_sub(2, 3, 4);  // ((2 - ) -3 ) - 4) = -5
    auto b = right_sub(2, 3, 4); // (2 - (3 - 4)) = 3
    std::cout << a << "," << b << std::endl;

    print(1, 2, 3, 4, 5, 6,"������");
}
//���ֿɱ�c++11�Ŀɱ����ģ��Ҫ�õĶ�