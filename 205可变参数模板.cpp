//#include<iostream>
////�����˳�����
//void show(){}
//template<typename T,typename ...Args>
//void show(T v, Args... args)
//{
//	std::cout << v << ",";
//	show(args...);
//}
//void test01()
//{
//	show(5,6.2,'*',"hello");
//}
//int main()
//{
//	test01();
//	return 0;
//}
////�������ǵݹ���ã�����9�����裬�����������ʼ��������֣�Ȼ��û�������˾ͽ�����������غ�����ִ�����
////��ʼ��������ջ������ջ��Ҳ�����֣��෴˳��
////c++ prime plus P670�棬���ֲ������кܶ��÷�.

////������ͨ�Ŀɱ���������ܽ����������ͣ���c����
//#include<iostream>
//#include<cstdarg>
////�ɱ�����ĺ���
//void vair_fun(int count, ...)
//{
//    va_list args;
//    va_start(args, count);
//    for (int i = 0; i < count; ++i)
//    {
//        int arg = va_arg(args, int);
//        std::cout << arg << " ";
//    }
//    va_end(args);
//}
//
//int main()
//{
//    //�ɱ������ 4 �����ֱ�Ϊ 10��20��30��40
//    vair_fun(4, 10, 20, 30, 40);
//    return 0;
//}

////������c++11���Ŀɱ����ģ��
//#include <iostream>
//using namespace std;
////ģ�庯���ݹ�ĳ���
//void vir_fun() {
//
//}
//
//template <typename T, typename... args>
//void vir_fun(T argc, args... argv)
//{
//    cout << argc << endl;
//    //��ʼ�ݹ飬����һ��������� argv ���������´��ݸ� vir_fun
//    vir_fun(argv...);
//}
//
//int main()
//{
//    vir_fun(1, "http://www.biancheng.net", 2.34);
//    return 0;
//}
