#include<iostream>
#include<string>
#include <iostream>
#include<array>

struct test {
    int a;
    std::string str;
};

test ave() {
    return test{ 56,"����" };
}

void test01()
{
    test temp;
    auto [first, second] = temp;
    temp = ave();
    std::cout << temp.a << " " << temp.str << std::endl;
    
}
void test04()
{
    char ch = 0;
    int num = 0;
    char str[100]{ 0 };
    int i = 0;
        ch=std::cin.get();
        //�ж�cin�Ƿ��⵽EOF�������⵽����true�ͽ�����������
        while (std::cin.fail() == false)
        {
            str[i++] = ch;
            ch = std::cin.get();
            
        }
        std::cout <<str << std::endl;
}
int main() {
    
    //test01();
    test04();
}