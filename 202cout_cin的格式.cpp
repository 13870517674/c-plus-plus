//#include<iostream>
//void test01()
//{
//	//����Ĭ������ַ����ӿո���*����������Ļ���һֱ��������
//	std::cout.fill('*');
//	//����ַ� ֻӰ����Ŀ�µ�һ�仰����˼����˵��ӡ10��*��ô�򵥣�Ĭ���ǿո���ʵ���ǵ�����ʽ��
//	std::cout.width(10);
//	std::cout << 2 << std::endl;
//	std::cout << 3 << std::endl;
//}
//void test02()
//{
//	//���ǿ��Կ���Ĭ���Ǳ�����λ
//	std::cout << 1 / 3.0 << std::endl;
//
//	//ʹ��precision()Ҳ����cout�ĳ�Ա�������ñ���С��λ�������fillһ����������û�������������Ŀһֱ����
//	//˳��˵һ����32λ�Ļ�����doubleֻ�ᱣ֤С�����16λ�ľ���
//	std::cout.precision(2);//���ñ�����λС��
//	std::cout << 1 / 3.0 << std::endl;
//
//}
//void test03()
//{
//	//����֪�������ڸ�������С������0�ǲ�����ʾ�ģ�iostreamҲû��ר�������������ģ�����ʹ��ios_base���setf()����,����鿴c++ prime plus P605
//	std::cout.setf(std::ios_base::showpoint);
//
//	std::cout.precision(3);//���ñ�����λС�����������λʵ�����ǰ�����С����ǰ������������ӡ��5.20���ǵ�����Ϊ��λ
//	std::cout << 5.2 << std::endl;
//}
//int main()
//{
//	//����ַ�
//	//test01();
//
//	//���ø���������С��λ
//	//test02();
//
//	//ͨ��������ǿ��Կ������������޹أ����õ���cout��������� 
//	//std::cout << 1 / 3.0 << std::endl;
//
//	//��ӡĩβ��0��С����
//	test03();
//	return 0;
//}
////˳��˵һ��std::cout�����������ַ�dec,hex,oct�ֱ��Ӧ10,16,8����
////c++ prime plus P606����610���ֵ�ÿ����ṩ�˴����ĸ�ʽ�����ͱ�׼���Ʒ�������test03��ʹ�÷�ʽ

//����cin�ĸ�ʽ�����鿴c++ prime plus 617��622
//#include<iostream>
//#include<string>
//void test01()
//{
//	int temp;
//	//��������16����
//	std::cin >> std::hex >> temp;
//	//Ĭ�������10����
//	std::cout << temp;
//}
//void test02()
//{
//	int temp, sum = 0;
//	while (std::cin >> temp) {
//		sum += temp;
//	}
//	std::cout << sum << std::endl;
//}
//void test03()
//{
//	char ch[6]{ 0 };
//
//	//read���������Լ���ӿ��ַ������Ե���һλ�����ַ��������ַ�������ʽ���
//	std::cin.read(ch, 5);
//	std::cout << ch << std::endl;
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//}