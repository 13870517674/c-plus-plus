#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v{ 3, 1, 4 };

    auto vi = v.begin();

    std::advance(vi, 2);//��һ��������Ҫǰ���ĵ��������ڶ���������ǰ����Ԫ�ظ���

    std::cout << *vi << '\n';//��ӡ4
}
//���Ĺ���Զ��ֹ��ˣ����Բ鿴�ο��ĵ�����������