#include <iostream>
#include <algorithm>
#include <string>

void test(const std::string_view& s)
{
    if (std::equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())) 
        std::cout << s << " �ǻ��Ĵ�" << std::endl;
    else 
        std::cout << s << " ���ǻ��Ĵ�" << std::endl;
}
int main()
{
    test("radar");
    test("hello");
}