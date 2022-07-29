#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<string>
#include <unordered_set>
int main()
{
    std::vector<std::string> names{ "A1", "Beth", "Carol", "Dan", "Eve","Fred", "George", "Harry", "Iain", "Joe" };
    std::unordered_set<std::string> more_names{ "Jean", "John" };
    size_t max_length{ 4 };
    std::copy_if(std::begin(names), std::end(names), std::inserter(more_names, std::begin(more_names)), [=](const std::string& s) { return s.length() <= max_length; });//ÿһ�Ҫ�жϳ����Ƿ���ڵ���4�����������Ż´��
    /*��Ϊ��Ϊ�� 4 �������� lambda ���ʽ����ӵ������������ copy_if() ����ֻ�Ḵ�� names �е� 4 ���ַ�������١�Ŀ��������һ�� unordered_set ���� more_names�����Ѿ���
    ���������� 4 ���ַ������ơ���ǰ����½�һ����insert_itemtor �ὫԪ����ӵ��޶��Ĺ��������С������Ҫչʾ������ι����ģ������� copy() �㷨�г� more_names ������*/
    std::copy(std::begin(more_names), std::end(more_names), std::ostream_iterator <std::string>{std::cout, " "});
    std::cout << std::endl;

    //��ȻҲ����ʹ��������������ӡlambdaΪ���
    std::copy_if(std::begin(names), std::end(names), std::ostream_iterator< std::string> {std::cout, " "}, [max_length](const std::string& s) { return s.length() > max_length; });
}