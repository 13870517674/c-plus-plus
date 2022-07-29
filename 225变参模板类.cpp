#include<iostream>
#include<string>

template<typename...> struct Tuple {};
template<typename T1, typename T2> struct Pair {};

template<class... Args1> struct zip
{
    template<class... Args2> struct with
    {
        typedef Tuple<Pair<Args1, Args2>...> type;
        // Pair<Args1, Args2>... �ǰ�չ��
        // Pair<Args1, Args2> ��ģʽ
    };
};

typedef zip<short, int>::with<unsigned short, unsigned>::type T1;
// Pair<Args1, Args2>... ��չ����
// Pair<short, unsigned short>, Pair<int, unsigned int> 
// T1 �� Tuple<Pair<short, unsigned short>, Pair<int, unsigned>>
int main()
{

    return 0;
}