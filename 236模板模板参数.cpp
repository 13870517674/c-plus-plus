#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include <queue>
#include<deque>

template<typename T, template<typename> typename Container>//ģ��ĵڶ�������Ϊģ�壬�ⲿ��typename��ʾ����һ�����ͣ�ģ�壬����Ҫ����
class XCls
{
private:
    Container<T> c;//��ģ���ģ���������ģ�����
};
template<typename T>
class test
{
private:
    T t;
};
//Ҳ��������Ĭ�ϲ���,���Ƿ���һ����Ȥ�����飬����ʹ��using����typedef�ı���,����string��vector,ģ��Ĳ�������ʹ����ģ���Ǻϣ�����
template<typename T, template <class _Ty, class _Container = std::deque<_Ty>>typename Container=std::queue>
class XCls2
{
private:
    Container<T> c;
};

int main(void)
{
    XCls<std::string, test> mylst1;
    XCls2<std::string> mylst2;
    return 0;
}