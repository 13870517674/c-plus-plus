//#include<iostream>
//#include<string>
//#include<memory>//����ָ��ͷ�ļ�
//using namespace std;
//int main()
//{
//	unique_ptr<int>up1(new int(11));//����ָ�����ͬʱ��ʼ��
//	cout << "up1=" << *up1 << endl;
//
//	//unique_ptr<int>up2 = up1;//��ֹ�������죬err
//
//	//�ƶ����죬��up1��ʹ��Ȩת�Ƹ�up2��up1�����ٲ��������ռ�
//	unique_ptr<int>up2 = std::move(up1);
//	cout << "up2=" << *up2 << endl;
//
//	//����ֶ��ͷ�����ָ�벻�ᵼ�´���
//	up2 = nullptr;
//	up2 = NULL;
//	up2.reset();
//
//	//up2.reset();//������޲Σ���������ʽ�ͷŶ����ڴ�
//	//������вΣ���ʹ��ԭ���Ķ����ڴ棬���¸�up1��һ���µĶ�������
//	up2.reset(new int(22));
//	cout << "up2=" << *up2 << endl;
//
//	//�ͷſ���Ȩ���ͷŶ����ڴ�
//	int* p = up2.release();
//	cout << "p=" << *p << endl;
//	//��Ҫ�ֶ��ͷ�
//	delete p;
//	return 0;
//}
////�ƶ������ԭ��������ָ�벻���ٲٿ������ڴ��ˣ���Ұָ��
////�ͷſ���Ȩ�������ָ�벻���ٲٿ��ˣ�����Ҫ�ֶ��ͷ�