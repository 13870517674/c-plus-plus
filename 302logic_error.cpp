#include<string>
#include<iostream>

int main() {
    //logic_error���캯�����ַ�������ʾ�ڿ���̨����throw�׳��쳣
    std::cout << (2 + 3 == 4 ? "OK" : throw std::logic_error("2+3!=4"));
}