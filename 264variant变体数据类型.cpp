#include<iostream>
#include<variant>

decltype(auto) demo() {
	//define
	std::variant<int, double, std::wstring> var1{ 1.0 };
	std::variant<int, double, std::wstring> var2{ L"2" };
	std::variant<int, std::wstring> var3{ 3 };

	//assign
	var2 = L"abc";
	var1 = L"str1";
	var2.emplace<int>(1);	//ԭλ���� variant �е�ֵ
	std::wcout << L"the var1 = " << std::get<std::wstring>(var1) << std::endl;		//std::get()ʹ�����Ͳ���
	std::wcout << L"the var2 = " << std::get<0>(var2) << std::endl;					//std::get()ʹ���±����

	//swap
	std::swap(var1, var2);

	//ȷ�����������
	if (var2.index() == 2) {
		//���ǽ�����
	}
	var1 = 100;
	if (std::holds_alternative<int>(var1)) {	//���ĳ�� variant �Ƿ�ǰ����ĳ����������
		std::wcout << L"var1 is " << typeid(int).name() << std::endl;
	}

	//�ṩ�Կ��� cv �޶� variant �����ͱ���ʱ�±���ʣ��� variant �� cv �޶����ѡ��� cv �޶��������ڣ�����
	std::variant_alternative<2, decltype(var1)>::type val{ L"123" };
	// ��ȡֵ
	var1 = 1;
	std::wcout << L"var1 = " << std::get<int>(var1) << std::endl;

	var2 = L"2";
	std::wcout << L"var2 = " << std::get<2>(var2) << std::endl;

	if (auto pV = std::get_if<int>(&var3)) {	//ָ��洢�ڱ�ָ��� variant ��ֵ��ָ�룬����ʱΪ��ָ��
		std::wcout << L"var3 = " << *pV << std::endl;
	}
}

int main() {
	demo();
	return 0;
}