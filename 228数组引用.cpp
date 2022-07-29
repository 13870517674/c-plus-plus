#include<iostream>
#include<string>
template<typename T, int N, int M>
bool less(T(&a)[N], T(&b)[M])//����������ģ�壬����������ģ����ֱ���Ƶ�������ĳ���
{
	for (int i = 0; i < N && i < M; ++i)
	{
		if (a[i] < b[i]) return true;
		if (b[i] < a[i]) return false;
	}
	return N < M;
}

template<typename T, int N, int M>
void test1(T(&a)[N], T(&b)[M])
{
	std::cout << sizeof a << "," << sizeof b << std::endl;
}

void test2(int a[], int b[])
{
	std::cout << sizeof a << "," << sizeof b << std::endl;
}

int main()
{
	int x[] = { 1, 2, 3 };
	int y[] = { 1, 2, 3, 4, 5 };
	std::cout << less(x, y) << '\n';
	//�������õ��﷨
	int(&p)[3] = x;	//ʹ����������Ϊ����ԣ������ŵ����ȼ�������С�����ñ����Ⱥ�&��ϱ�ʾ������
	std::cout << p[2] << "," << x[2] << std::endl;//�����һ����
	
	//������������������ʾһ��
	test1(x, y);//12 20
	test2(x, y);//4 4
	//ǰ����ֱ�ӵó�����Ĵ�С������ֻ��ָ��

	//�����پ�һ�����ӣ�auto
	auto& p2 = x;
	std::cout << sizeof p2 << "," << sizeof x << std::endl;//�����һ���� 12 12��auto������һ�����Ƶ�Ϊ��������

	return 0;
}
//����д��Ҫ�ĺô��Ƿ�ֹ����˥�˳�ָ�룬ʧȥ�˳���
//ͬʱ��һ��������ר�Ŵ�������������ַ�������ģ��