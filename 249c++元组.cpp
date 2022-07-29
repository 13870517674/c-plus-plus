#include<iostream>
//tuple ������һ���Կɱ�ģ������������ģ�壬�������� <tuple> ͷ�ļ���λ�� std �����ռ��С����Ҫ��ʹ�� tuple ��ģ�壬��������Ҫ�����������´��룺
#include <tuple>
using std::tuple;

/*ʵ���� tuple ģ��������õķ��������֣�һ���ǽ�������Ĺ��캯������һ���ǽ��� make_tuple() ������
��Ĺ��캯��
tuple ģ�����ṩ�кܶ๹�캯����������*/

/*
1) Ĭ�Ϲ��캯��
constexpr tuple();
2) �������캯��
tuple (const tuple& tpl);
3) �ƶ����캯��
tuple (tuple&& tpl);
4) ��ʽ����ת�����캯��
template <class... UTypes>
    tuple (const tuple<UTypes...>& tpl); //��ֵ��ʽ
template <class... UTypes>
    tuple (tuple<UTypes...>&& tpl);      //��ֵ��ʽ
5) ֧�ֳ�ʼ���б�Ĺ��캯��
explicit tuple (const Types&... elems);  //��ֵ��ʽ
template <class... UTypes>
    explicit tuple (UTypes&&... elems);  //��ֵ��ʽ
6) ��pair����ת��Ϊtuple����
template <class U1, class U2>
    tuple (const pair<U1,U2>& pr);       //��ֵ��ʽ
template <class U1, class U2>
    tuple (pair<U1,U2>&& pr);            //��ֵ��ʽ
*/
void test01() {
    int size;
    //����һ�� tuple ����洢 10 �� 'x'
    std::tuple<int, char> mytuple(10, 'x');
    //���� mytuple �洢Ԫ�صĸ���
    size = std::tuple_size<decltype(mytuple)>::value;
    //��� mytuple �д洢��Ԫ��
    std::cout << std::get<0>(mytuple) << " " << std::get<1>(mytuple) << std::endl;
    //�޸�ָ����Ԫ��
    std::get<0>(mytuple) = 100;
    std::cout << std::get<0>(mytuple) << std::endl;
    //ʹ�� makde_tuple() ����һ�� tuple ����
    auto bar = std::make_tuple("test", 3.1, 14);
    //��� bar ���󣬷ֱ�ֵ�� mystr��mydou��myint
    const char* mystr = nullptr;
    double mydou;
    int myint;
    //ʹ�� tie() ʱ������������ĳ��Ԫ�ص�ֵ��ʵ�ο����� std::ignore ����
    std::tie(mystr, mydou, myint) = bar;
    //std::tie(std::ignore, std::ignore, myint) = bar;  //ֻ���յ� 3 ������ֵ
    //�� mytuple �� bar �е�Ԫ�����ϵ� 1 �� tuple ������
    auto mycat = std::tuple_cat(mytuple, bar);
    size = std::tuple_size<decltype(mycat)>::value;
    std::cout << size << std::endl;
}
int main()
{
    std::tuple<int, char> first;                             // 1)   first{}
    std::tuple<int, char> second(first);                     // 2)   second{}
    std::tuple<int, char> third(std::make_tuple(20, 'b'));   // 3)   third{20,'b'}
    std::tuple<long, char> fourth(third);                    // 4)����ֵ��ʽ, fourth{20,'b'}
    std::tuple<int, char> fifth(10, 'a');                    // 5)����ֵ��ʽ, fifth{10.'a'}
    std::tuple<int, char> sixth(std::make_pair(30, 'c'));    // 6)����ֵ��ʽ, sixth{30,''c}

    // make_tuple()����
    auto first2 = std::make_tuple(10, 'a');   // tuple < int, char >
    const int a = 0; int b[3];
    auto second2 = std::make_tuple(a, b);     // tuple < int, int* >

    test01();
	return 0;
}
3