#include<iostream>
#include<exception>
#include<string>

struct MyException :std::exception
{
	MyException(const std::string &s) :exception(s.data()) {}//没必要重写what方法，无所谓，看需求即可，不知道怎么写就看源码实现
};

void f()noexcept(false) {
	try
	{
		throw std::runtime_error("6666");//运行时异常
		//throw std::logic_error("错误");//抛出多个异常也只有第一个会被捕获，所以这里注释
	}
	catch (const std::exception& e)//c++的标准异常类，其他异常都继承自它，所以这里是父类能够捕获所有子类异常(多态)
	{
		std::cerr << e.what() << std::endl;//std::cerr是c++输出到标准错误的对象
	}
}
//自定义异常
void ff()noexcept(false) {
	try {
		throw MyException("错误错误!");
	}catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
	}
}
int main() {
	//f();
	ff();

	//throw std::logic_error("傻子");//就算不捕获这个异常它依旧会打印到标准错误然后才会中断
	std::cout << "6666" << std::endl;

	//如果我们重定向标准输出到文件就知道文件里面只有6666，因为我们将错误输出到的是标准错误，这是一个很好的习惯
}