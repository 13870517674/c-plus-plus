//#include<iostream>
//#include<string>
//#include<memory>
//using namespace std;
//int main()
//{
//	shared_ptr<int>sp1(new int(11));
//	shared_ptr<int>sp2(sp1);//��unique_ptr��ͬ������������,����������Ͷ�����
//
//	cout << "num=" << sp2.use_count() << endl;//��ӡ��������Ҳ�����ж��ٸ�����Ͷ�������
//
//	//�ͷ��������ָ��Ͷ����İ󶨣�û���ͷŶ����ڴ棬�޷�ͨ��sp1���������ڴ�
//	sp1.reset();
//	cout << "num=" << sp2.use_count() << endl;
//
//	//�ͷ�sq2������������ֵΪ0�������ռ�ͻ��ͷ�
//	sp2.reset();
//	cout << "num=" << sp2.use_count() << endl;
//	return 0;
//}
