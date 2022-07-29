#include <memory>
#include <iostream>
#include<algorithm>

int main()
{
    std::allocator<int> v1Alloc;//�����ռ�����������ʱ�����;�����������ڴ������
    auto v1aPtr = v1Alloc.allocate(10);//�����ڴ�����
    for (int i = 0; i < 10; i++) {
        v1aPtr[i] = i;
    }
    std::for_each(v1aPtr, v1aPtr + 10, [](auto a) {std::cout << a << ' '; });
    std::cout << std::endl;
    v1Alloc.deallocate(v1aPtr, 10);//�ͷŷ�����ڴ�

}