#include <iostream>

template <typename T>
class Foo
{
public:
    Foo() {}
    ~Foo() {}
    //��Ա�������Լ���ģ�����
    template <typename S>
    void print_s_a(S p)
    {
        std::cout << "S= " << p << std::endl;
        std::cout << "T = " << _a << std::endl;
    }

    template <typename TT>
    void print_tt_a(TT p);//����ģ�����Ա����

private:
    T _a = 0;
};

//ע���Աģ�庯������������ķ���
template <typename T>
template <typename TT>
void Foo<T>::print_tt_a(TT p)
{
    std::cout << "TT = " << p << std::endl;
    std::cout << "T = " << _a << std::endl;
}

int main()
{
    Foo<int> f;
    f.print_s_a("123");//����ʵ�ֵĵ���

    f.print_tt_a("456");//����ʵ�ֵĵ���
    return 0;
}
//����ģ����ԣ����Ա����ֻ���ڱ��õ���ʱ��Żᱻʵ����