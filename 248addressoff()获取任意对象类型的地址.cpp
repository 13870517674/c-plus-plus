#include<iostream>
#include<string>
void f(auto&& x)//string�����޷�����ֵ���ã�auto�Զ�ȥ����һ��&������ʵ������ͨ����ֵ����
{
	auto p = &x; 
	auto q = std::addressof(x); 
	x = "������";
	std::cout << typeid(p).name() << std::endl;
	std::cout << typeid(q).name() << std::endl;
}

int main()
{
	std::string name{ "123" };
	f(name);
	std::cout << name << std::endl;
	return 0;
}
/*����ģ��std::addressof<>()�᷵��һ��������ߺ�����׼ȷ��ַ����ʹһ����������������
��&Ҳ����������Ȼ�����е������������������Ҳ�ᷢ��������������ָ���У�����ˣ�
�����Ҫ����������͵Ķ���ĵ�ַ����ô�Ƽ�ʹ��addressof()��*/