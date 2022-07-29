#include<iostream>
#include<string>
#include<regex>

void search() {
	//std::regex_search: ����������ʽ����, ������Ҫ�������ַ�������ȫƥ��. 
	//������ֻ���е�������, ��������ֹͣ��������, �������ظ��������.
	std::string text = "Date:2017-10-10 ~ 2018-10-15";
	std::string pattern = "(\\d\\d\\d\\d)";
	std::regex express(pattern);
	std::smatch results1;
	if (std::regex_search(text, results1, express)){
		for (auto i : results1)
			std::cout << i.length() << ":" << i.str() << std::endl;//��ӡƥ����ַ��볤��
	}
	std::cout << std::regex_search(text, express) << std::endl;//�����Ƿ�ƥ�䣬��ӡ0����1
}
void extended() {
	std::string str = "zzxayyzz";
	std::regex re1(".*(a|xayy)"); // ECMA
	std::regex re2(".*(a|xayy)", std::regex_constants::extended); // POSIX
	std::cout << "Searching for .*(a|xayy) in zzxayyzz:\n";
	std::smatch m;
	std::regex_search(str, m, re1);
	std::cout << " ECMA (depth first search) match: " << m[0] << '\n';
	std::regex_search(str, m, re2);
	std::cout << " POSIX (leftmost longest)  match: " << m[0] << '\n';
}
void regex_match() {
	std::string text = "192.168.139.2";
	std::regex e("\\d + \\.\\d + \\.\\d + \\.\\d");
	std::cmatch what; //ƥ��Ĵ����������
	if (regex_match("helloamfinalthinks192.168.139.2AAA", what, e)){
		for (int i = 0; i != what.size(); i++) {
			std::cout << what[i].first;
		}
	}
}
void regex_iterator() 
{
	std::string text = "hello am final thinks 192.168.139.2AAA";
	std::string pattern = "(\\d)+\\.\\d+\\.\\d+\\.\\d";
	std::regex express(pattern);

	std::regex_iterator<std::string::const_iterator> begin(text.cbegin(), text.cend(), express);
	for (auto iter = begin; iter != std::sregex_iterator(); iter++)
	{
		std::cout << iter->length() << ": " << iter->str(0) << std::endl;//str�������԰ѷ�������ݵõ�ֵ��ע��
	}
}
void regex_replace() {
	std::regex reg("\\d+"); //����
	std::string str="hello 8848";
	std::cout << std::regex_replace(str, reg, "��ը�ֻ�") << std::endl;
}
int main() {
	
	//std::regex_search
	//search();

	//std::regex_constants::extended
	//extended();

	//regex_match
	//regex_match();

	//std::regex_iterator
	//regex_iterator();

	//regex_replace(�滻)
	//regex_replace();

	/*
		std::regex_iterator��std::regex_replace�����������ǵ��ճ�ʹ�á�
		C++��׼���������Ч�ʹ��ͣ�Qt��boost������������������ࡣ
	*/
}