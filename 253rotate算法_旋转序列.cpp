#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<vector>
int main() {
    std::vector<std::string> words{ "one", "two", "three", "four", "five","six", "seven", "eight" };
    auto iter = std::rotate(std::begin(words), std::begin(words) + 3, std::end(words));
    std::copy(std::begin(words), std::end(words), std::ostream_iterator<std::string> {std::cout, " "});
    //���������ֱ��ǿ�ʼλ�ã�Ȼ���Լ���Ҫ��λ�ã�Ȼ�����λ�ã����翪ʼ��1����Ҫ��λ����3��������λ����5����ô�ͻ��1 2 3 �ŵ�5���棬������ʾ4 5 6 7 8 9 10 1 2 3
    std::vector<int>n{ 1,2,3,4,5,6,7,8,9,10 };
    std::rotate(n.begin(), n.begin() + 3, n.end());
    std::copy(std::begin(n), std::end(n), std::ostream_iterator<int> {std::cout, " "});
}