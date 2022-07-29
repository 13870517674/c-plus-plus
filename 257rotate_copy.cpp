#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
/*rotate_copy() �㷨����������������һ�����е���ת������������ԭ���в��䡣rotate_copy() ��ǰ 3 �������� copy() ����ͬ�ģ��� 4 ��������һ�������������
��ָ��Ŀ�����еĵ�һ��Ԫ�ء�����㷨�᷵��һ��Ŀ�����е��������������ָ�����һ��������Ԫ�ص���һ��λ�á����磺*/
int main() {
    std::vector<std::string> words{ "one", "two", "three", "four", "five","six", "seven", "eight", "nine","ten" };
    auto start = std::find(std::begin(words), std::end(words), "two");
    auto end_iter = std::find(std::begin(words), std::end(words), "eight");
    std::vector<std::string> words_copy;
    std::rotate_copy(start, std::find(std::begin(words), std::end(words), "five"), end_iter, std::back_inserter(words_copy));

    std::copy(std::begin(words_copy), std::end(words_copy), std::ostream_iterator<std::string>{std::cout, " "});
    std::cout << std::endl;
}