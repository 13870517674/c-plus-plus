//#include<iostream>
//#include<valarray>
//
//void test01()
//{
//	std::valarray<int> arry = { 10,20,30,40,50 };
//	std::cout << arry.size() << " " << arry.max()<<" " << arry.min() <<" " << arry.sum() << std::endl;
//	//����
//	for(int i : arry) {
//		std::cout << i << " ";
//	}
//	//valarray�����������е���������������Բ���Ҫ��stl��ô�鷳�Ĳ�����ֱ�Ӿ��ܸ�ÿ��Ԫ��*��Ӧ����
//	arry = arry * 10;
//	for (int i : arry) {
//		std::cout << i << " ";
//	}
//}
//void test02()
//{
//	int v = 0;
//	//���캯��������10��Ԫ�ص��ڴ�
//	std::valarray<int>av(10);
//	for (auto& i : av) {
//		i = v++;
//	}
//	//���
//	std::cout << av.sum() << std::endl;
//	//����ָ���ڴ�Ԫ�ظ�����ֵ�����
//	av.resize(20, 10);
//	std::cout << av.sum() << std::endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
////�������û��кܶ࣬���Կ�c++ prime plus583��
