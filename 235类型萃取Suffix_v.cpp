#include<iostream>
#include<string>
#include <type_traits>
//��C++17 ��ʼ����׼���ñ���ģ��Ϊ����������һ��ֵ�������ͣ���������ȡ�����˼򻯷�
//ʽ������Ϊ���ܹ�ʹ�ã�
//std::is_const_v<T> // since C++17
//�����ǣ�
//std::is_const<T>::value //since C++11
//��׼���������¶��壺
//namespace std {
//	template<typename T>
//	constexpr bool is_const_v = is_const<T>::value;
//}
int main()
{
	std::is_const_v<int>;
	std::cout << std::is_const_v<int> << std::endl;
	return 0;
}