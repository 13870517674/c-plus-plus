#include<iostream>
#include<string>
template<typename T>
class MyClass {
public:
	static constexpr int max = 1000;
};

template<typename T>
int myMax = MyClass<T>::max;
//����ζ�Ŷ���һ����׼����ࣺ
namespace std {
	template<typename T>
	class numeric_limits {
	public:
		
			static constexpr bool is_signed = false;
		
	};
}
//���Զ��壺
template<typename T>
constexpr bool isSigned = std::numeric_limits<T>::is_signed;
//�����Ϳ����ã�
//isSigned<char>;
//���棺
//std::numeric_limits<char>::is_signed;

int main()
{

	//Ӧ�ù���ʦ�Ϳ���ʹ�����������Ĵ��룺
	auto i = myMax<std::string>;
	std::cout << i << std::endl;
	//�����ǣ�
	//auto i = MyClass<std::string>::max;
	//std::cout << i << std::endl;
	return 0;
}