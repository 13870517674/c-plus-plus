#include<iostream>
#include<string>
//��C++14 ��ʼ������Ҳ���Ա�ĳ�����Ͳ���������Ϊ����ģ�塣
//�������ͨ������Ĵ��붨��pi�����ǲ������������ͣ�

template<typename T=int>//����д��Ĭ��int 
T pi{};//��ʼ���б� Ϊ0
//ע�⣬����������ģ�����ƣ����������ò�Ҫ�����ں����ڲ����߿��������ڲ���
int main()
{
	std::cout.precision(16);
	pi<int> = 20;//pi<>=20;Ч��һ��
	std::cout << pi<int> << std::endl; //20
	pi<double> = 3.14159265358;
	std::cout << pi<double> << std::endl;//3.14159265358
	std::cout << pi<float> << std::endl;//0
	return 0;
}
//����ģ�岻�Ǿֲ�����������һ��ȫ�ֱ���,main��������ʹ�ò���ʵ����Ҳ���Ǵ���