#include <iostream>    
#include <algorithm>  
int main() {
    //�������д洢�� 2 ����������
    int first[] = { 5,10,15,20,25,7,17,27,37,47,57 };
    //�� [first,first+5) �� [first+5,first+11) �ϲ�Ϊ 1 ���������С�
    std::inplace_merge(first, first + 5, first + 11);
    for (int i = 0; i < 11; i++) {
        std::cout << first[i] << " ";
    }
    std::cout << std::endl;
    int first_[]{ 57,47,37,27,17,10,9,8,7,6,5,4 };
    std::inplace_merge(first_, first_ + 5, first_ + 11, [](auto a, auto b) {return a > b; });
    for (auto i : first_)
        std::cout << i << ' ';
    return 0;
}
//ֻ�ܴ����������У���������ָ���Ҫ���մ�С������ô���������������б���Ҳ�Ƿֱ��С����