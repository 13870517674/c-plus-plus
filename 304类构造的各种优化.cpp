#include<iostream>
#include<vector>
class Person {
public:
	Person(int i) :a(i) {
		std::cout << "�вι���" << std::endl;
	}
	Person() {
		std::cout << "Ĭ�Ϲ���" << std::endl;
	}
	void operator=(Person& n) {
		this->a = n.a;
		std::cout << "��������" << std::endl;
	}

	int a = 0;
};

auto test()->Person&& {//�����autoֻ������ռλ���� ->ָ������˭�Ĺ��캯��
	return 5;
}

int main() {
	Person a = 10;//�вι��� �Ż��Ľ���
	Person b = Person();//Ĭ�Ϲ��� �Ż��Ľ���
	std::cout << test().a << std::endl;//�вι��� �Ż�
	//�ܽ� ���ڱ�������˵ ������ ������(����)�� �� ������ ������=���������õ���ͬһ���вι��캯�� ��һ����˼
	//��Person b = Person();���ֻ�ֱ���Ż�ΪĬ�Ϲ���
}