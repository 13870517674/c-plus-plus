//#include<iostream>
//#include<memory>
//#include<algorithm>
//class Person
//{
//public:
//	Person(int age, std::string name)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	//�ṩ�޲ι�����Ϊ��new�ܹ��й��캯�����ã����ֻ���вι���ͻ������
//	Person()
//	{
//		this->m_Age = 0;
//		this->m_Name = "";
//	}
//
//	void showPerson()
//	{
//		std::cout << "����:" << this->m_Name << " ����:" << this->m_Age << std::endl;
//	}
//	void ave(int age, std::string name)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//private:
//	int m_Age;
//	std::string m_Name;
//};
//void ram(const std::string& str)
//{
//	//��������ָ�봴����������ָ����һ���࣬��һ�������Ǵ�����
//	//ָ�����ͣ�Ȼ������������new��̬�ڴ棬����������str��ʼ��ָ��
//
//	//unique���������˼��ptr��ָ�뵥�ʵ���д���»���������˼�������ָ��
//	std::unique_ptr<std::string>ps(new std::string(str));
//	std::cout << *ps << std::endl;
//	//��̬�ڴ��Զ����գ�����Ҫ�ֶ�delete���뿪������ʱ��ָ����ڣ��Զ�����
//}
//void test01()
//{
//	//����һ��string�����������ȥ
//	ram(std::string("ɵ��"));
//}
//void test02()
//{
//	//ʹ������ָ����Զ����������ͣ�����10������Ĵ�С
//	//ע�����͵�д��Person[]�������ͷŵ�ʱ�����delete[]��new[]��Ӧ
//	std::unique_ptr<Person[]>ps(new Person[5]);
//	for (int i = 0; i < 5; i++) {
//		ps[i].ave(i, "ɵ��");//��ֵ
//	}
//	for (int i = 0; i < 5; i++) {
//		ps[i].showPerson();//������ʾ
//	}
//}
//int main() {
//	//test01();
//	test02();
//}