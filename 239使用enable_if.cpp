/*ͨ��ʹ��enable_if<>���Խ��6.2 ���й��ڹ��캯��ģ������⡣
����Ҫ����������ǣ������ݵ�ģ����������Ͳ���ȷ��ʱ�򣨱��粻��std::string ���߿�
��ת����std::string �����ͣ����������¹��캯��ģ�壺*/

//emplate<typename STR>
//Person(STR&& n);
/*Ϊ����һĿ�ģ���Ҫʹ����һ����׼���������ȡ��std::is_convertiable<FROM, TO>����C++17
�У���Ӧ�Ĺ��캯��ģ��Ķ������£�*/
//template<typename STR, typename =
//	std::enable_if_t<std::is_convertible_v<STR, std::string>>>
//	Person(STR&& n);
//���STR ����ת����std::string������������չ�ɣ�
//template<typename STR, typename = void>
//Person(STR&& n);
#include<iostream>
#include<string>
int main()
{

	return 0;
}