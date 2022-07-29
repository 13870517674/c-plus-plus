#include <iostream>
#include <filesystem>
//���еķ�����������std::filesystem::�����ռ䣬��������filesystemͷ�ļ��������ռ�Ҳ������

int main(int argc, char* argv[])
{
	std::filesystem::path p{ "D:/����/vs��c++/c++2022_1_19/c++2022_1_19.vcxproj.filters" };   // p����һ���ļ�ϵͳ·�������ܲ����ڣ�
	if (is_regular_file(p)) { //���p���ļ�
		std::cout << p << " size is " << file_size(p) << " bytes\n";//file_size������ӡ�ļ���С����λbyte
	}
	else if (is_directory(p)) {//���p��Ŀ¼
		for (const auto& e : std::filesystem::directory_iterator{ p }) {//directory_iterator�������ȡ��ǰĿ¼�����ļ�
			std::cout << "  " << e.path() << '\n';//ȫ����ӡ
		}
	}
	else if (exists(p)) {//�ж�p�Ƿ����
		std::cout << p << " ��һ�������ļ�\n";
	}
	else {
		std::cout << "path " << p << " ������\n";
	}
}