#include<iostream>
#include<string>
//��������һ������ģ��ʱ������Ϊԭģ���е�ÿ��ģ��������ṩʵ�Ρ�ʹ�ùؼ���template���һ���ռ�����<>����template <>����ָ����������������һ��ģ�塣
template <typename T>
void fun(T a)
{
	std::cout << "The main template fun(): " << a << std::endl;
}

template <>   // ��int��������
void fun(int a)
{
	std::cout << "Specialized template for int type: " << a << std::endl;
}


template <>   // ��int��������
void fun(int* a)
{
	std::cout << "Specialized template for int type: " << a << std::endl;
}


template<typename T,typename A>
void av1(T a, A b) {
	std::cout << a << "," << b << std::endl;
}

template<typename T>//ƫ�ػ�
void av1(T a, int b)
{
	std::cout << "66666\t" << a << "," << b << std::endl;
}
int main()
{
	double a = 1.0;
	float b = 2.0f;
	int c = 3;
	fun(a);
	fun(b);
	fun(0);
	fun(&a);//Ҳ����ʹ��ָ�������������Ȼ���������ò��Ҳ���������
	//�������������ǵ�����������򵥵ĺ���ģ��������������

	//����ģ������������д��һ���Լ�Ҫ���⴦����������ͣ��Լ�ר�ŵ�д��������ͨ��ģ��
	
	//����������������ʹ��ƫ�ػ�
	av1(a, b);
	av1(c, b);
	av1(a, c);
	av1(b, c);
	//ע��۲�ƫ�ػ����﷨����

	return 0;
}