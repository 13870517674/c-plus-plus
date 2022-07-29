#include<iostream>
#include<string>
/*����һ���ڴ��Ѿõ���������concepts���������������Լ��ļ��﷨�����ģ��������������ơ�
���ҵ��ǣ����������˺ܾã�ֱ��C++17�� concepts��Ȼû�г�Ϊ��׼���һ���֡�һЩ������Ϊ��
һ�����ṩ�������Ե�֧�֣�����concepts��C++20�г�Ϊ�˱�׼���һ���֡�*/
class Person {
public:
	template<typename STR>
		requires std::is_convertible_v<STR, std::string>
	Person(STR&& n) : name(std::forward<STR>(n)) {

	}
private:
	std::string name;
};

//����Ҳ���Խ���Ҫ��ָ��Ϊͨ�õ�concept��

template<typename T>
concept ConvertibleToString = std::is_convertible_v<T, std::string>;

//Ȼ�󽫸�conceptָ��ΪҪ���������

//template<typename STR>
//	requires ConvertibleToString<STR>
//Person(STR&& n) : name(std::forward<STR>(n))
//{
//	...
//}

//Ҳ��������д��

//template<ConvertibleToString STR>
//Person(STR&& n) : name(std::forward<STR>(n))
//{
//	...
//}


int main()
{

	return 0;
}
