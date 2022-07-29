#include<iostream>
#include <functional>

/*std::ref ���ڰ�װ�����ô��ݵ�ֵ��
std::cref ���ڰ�װ��const���ô��ݵ�ֵ��*/

/*bind()��һ������ģ�壬����ԭ���Ǹ������е�ģ�壬����һ����������������bind()��֪�����ɵĺ���ִ�е�ʱ��
���ݽ����Ĳ����Ƿ���Ч��������ѡ�����ֵ���ݶ��������ô��ݡ���������ô��ݣ�std::ref��std::cref�������ó��ˡ�*/
void f(int& n1, int& n2, const int& n3)
{
    std::cout << "In function: n1[" << n1 << "]    n2[" << n2 << "]    n3[" << n3 << "]" << std::endl;
    ++n1; // ���Ӵ洢�ں�������� n1 ����
    ++n2; // ���� main() �� n2
    //++n3; // �������
    std::cout << "In function end: n1[" << n1 << "]     n2[" << n2 << "]     n3[" << n3 << "]" << std::endl;
}

int main()
{
    int n1 = 1, n2 = 1, n3 = 1;
    std::cout << "Before function: n1[" << n1 << "]     n2[" << n2 << "]     n3[" << n3 << "]" << std::endl;
    std::function<void()> bound_f = std::bind(f, n1, std::ref(n2), std::cref(n3));
    bound_f();
    std::cout << "After function: n1[" << n1 << "]     n2[" << n2 << "]     n3[" << n3 << "]" << std::endl;

    //C++11���������Ϊstd::bind��std::threadĬ��Ӧ�ò��ÿ��������ʹ���������󣬼���std::ref()����ʵ�ְ����ô��ݡ�
    //���Լ�ʹ�����ĵ�һ�����������ã�����bin�İ�ʵ���ǿ���������
    std::endl(std::cout);
    f(n1, std::ref(n2), std::cref(n3));
    std::cout << "After function: n1[" << n1 << "]     n2[" << n2 << "]     n3[" << n3 << "]" << std::endl;
}
/*n1��ֵ���ݣ������ڲ����޸Ķ�����û��Ӱ�졣
n2�����ô��ݣ������ڲ����޸�Ӱ�����档
n3��const���ô��ݣ������ڲ������޸ġ�*/