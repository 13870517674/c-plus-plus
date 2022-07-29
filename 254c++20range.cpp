#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
void print_impl(std::ostream& out, std::ranges::range auto&& r)
{
	for (auto&& elem : r)
	{
		out << elem << " ";
	}
	std::cout << std::endl;
}
void print_impl(std::ostream& out, auto&& elem)
{
	out << elem << " ";
	std::cout << std::endl;
}
void print(auto&&...args)
{
	(print_impl(std::cout, args), ...);
}

class print {
public:
	void operator()(auto&&...args)
	{
		(print_impl(std::cout, args), ...);
	}
private:
	void print_impl(std::ostream& out, std::ranges::range auto&& r)
	{
		for (auto&& elem : r)
		{
			out << elem << " ";
		}
		std::cout << std::endl;
	}
	void print_impl(std::ostream& out, auto&& elem)
	{
		out << elem << " ";
		std::cout << std::endl;
	}
};

int main() {
	std::vector<int>v{ 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int>v2{ 1,2,3,4,5,6,7,8,9,10 };
	std::array<int,10>v3{ 10,9,8,7,6,5,4,3,2,1 };
	//print(v, v2, "66");			//�ַ����ᵱ�����ִ��������Բ��ʺ�
	int num[10]{ 1,2,3,4,5,6,7,8,9,10 };
	print(num, num,v,v2,v3);
	//���Կ������ǻ�д��һ���࣬������Ϊ������Ŀǰ�����print��ͻ�����ԾͲ���ʾ��
	//һ��print()(num,v,v2,v3);����ֱ������������������
}