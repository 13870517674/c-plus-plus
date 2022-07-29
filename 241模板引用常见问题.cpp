#include<iostream>
#include<string>
template<typename T>
auto func(T& v) {
	std::cout << typeid(v).name() << std::endl;
}

template<typename T>
auto func2(T a){

	std::cout << typeid(a).name() << std::endl;
}
template<typename T>
void outR(T& arg) {//is_array�����ж��Ƿ�Ϊ���飬����bool����
	if (std::is_array<T>::value){
		std::cout << "got array of " << std::extent<T>::value << std::endl;
	}
}
int main()
{
	std::string str;
	//func(std::string("n"));//����Ĳ��Ϸ��ģ�������ʹ����ʱ����
	func(str);
	func("����");
	//func(std::move(str));//������ͨ��std::move()��������Ѵ��ڵı�����xvalue�����������
	std::endl(std::cout);

	//����ֵ���ݵĻ��򶼿���ʵ����ʹ��
	func2(std::string("n"));
	func2(str);
	func2("����");//�˻�Ϊָ��
	func2(std::move(str));

	std::endl(std::cout);
	std::string const str2;
	func(str2);//����string�ഴ���Ķ���typeidû�а취����cv�޶��������Խ���������һ�� �����Ǵ��ݵĵ�ȷ�ǳ���
	//outR(str2);
	return 0;
}
/*�����ô��ݲ���ʱ�������Ͳ����˻���decay����Ҳ����˵�����������ת��Ϊָ�룬Ҳ�����Ƴ�const ��volatile 
�����Ʒ����������ڵ��ò���������ΪT const &�����ƶϳ�����ģ�����T �����ͽ�������const��*/