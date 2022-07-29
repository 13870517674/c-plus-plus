#include<iostream>
#include<vector>

class Test {
public:
	void* operator new(size_t size)
	{
		std::cout << "����operator new" << std::endl;
		return malloc(size);
	}
	void operator delete(void* _Block)
	{
		std::cout << "����operator delete" << std::endl;
		free(_Block);
	}
	friend void* operator new[](size_t size) 
	{
		void* p = nullptr;
		std::cout << "����operator new[]" << std::endl;
		p = malloc(size);
		if (p == nullptr) {
			throw std::bad_alloc();//�쳣����
		}
		return p;
	}
	int m_a = 0;
	int m_b = 0;
};

int main()
{
	
	Test* test = new Test;
	test->m_a = 10;
	test->m_b = 20;
	::std::cout << test->m_a << ' ' << test->m_b << std::endl ;
	delete test;
	
	int* p = new int[ 1024*1024*500 ];//�׳��쳣
}
/*https://zhuanlan.zhihu.com/p/354046948
* /
/*new��һ���ؼ��֣���sizeofһ���������޷��޸�����幦�ܡ�new��Ҫ�������£�����ռ䡢��ʼ�����󡢷���ָ�롣����operator new����ռ䡣
operator new��һ������������ + - ������һ���������Ƿ���ռ䡣���ǿ�����д���ǣ��޸ķ���ռ�ķ�ʽ��*/
/*operator new����ֵ������void*����һ������������size_t�����ɼ���������*/
/*�����е�operator newĬ�Ͼ���static�����Լ�static���ԣ�����Ҳ��ȫ�֣���������ʹ�á�*/