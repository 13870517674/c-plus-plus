#include<sstream>//std::stringstream
#include <array>
#include <iostream>

int wmain()
{
	std::stringstream ss;

	ss << 50;
	std::string a;
	ss >> a;
	std::cout << a << std::endl;
	ss.clear();//ÿ��ת���궼Ҫ���

	ss << "1314";
	int b;
	ss >> b;
	std::cout << b << std::endl;

	ss.clear();
	ss << "51.2";
	double c;
	ss >> c;
	std::cout << c << std::endl;
	
	//�ɴ˵ó�std::stringstream��Ҫ�������ǽ����ַ���������֮���ת��
	//ʵ�������ǻ���������������
	std::stringstream s;
	s << "�ҵĵ绰������:\t" << 110 << "\t�ҵ�ip��ַ��:\t" << "192.168.139.127";
	std::cout << s.str() << std::endl;
}