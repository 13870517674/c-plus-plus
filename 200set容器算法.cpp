////�ṩ���������
//#include<iterator>
//#include<iostream>
////�ṩset����
//#include<set>
////�ṩstring����
//#include<string>
////�ṩset_union�㷨
//#include<algorithm>
//void test01()
//{
//	std::set<std::string>A{ "����","����","����" };
//	std::set<std::string>B{ "����2","����2","����2" };
//	//���������һ���ǵ�һ�������������䣬�����ǵڶ��������������䣬�������������������������Ƶ�ʲôλ�ã���������ѡ��ʹ����������������������������������
//	//����һ���ģ�����������Ĳ����ú�Ҫ�������������һ����Ȼ���¿ո����
//	std::set_union(A.begin(), A.end(), B.begin(), B.end(), std::ostream_iterator<std::string, char>(std::cout, " "));
//}
//void test02()
//{
//	std::set<int>B{ 1,2,3,4,5 };
//	std::set<int>A{ 6,7,8,9,10 };
//	std::set<int>sum;
//
//	//Ψһ��ͬ���ǵ������������ʹ��������insert_iterator����˼����ȷ���ǲ���_���������Բ���ķ�ʽ�����������Ͳ���Ҫ��֮ǰcopyһ���ȿ����ڴ���
//
//	std::set_union(A.begin(), A.end(), B.begin(), B.end(), std::insert_iterator<std::set<int>>(sum, sum.begin()));
//
//	//���Ǳ����������
//	//��������ע�⵽�����뵽set������ʱ���Զ����մ�С����Ľ����������,�����ı�����˳������ڴ���set�����ʱ����º���������ͨ����
//	std::copy(sum.begin(), sum.end(), std::ostream_iterator<int, char>(std::cout, " "));
//}
//int main()
//{
//	//ʹ����������������������
//	//test01();
//
//	//�����Ϸ���������
//	test02();
//	return 0;
//}
//���к���set_intersection()��set_difference()�ֱ���ҽ����ͻ�õĲ���ǵĽӿں�set_union��ͬ 