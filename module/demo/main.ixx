import <iostream>;
import test1.O;

int main() {
	std::cout << "Hello C++20" << '\n';
	MyFunc();
	print("****");
	//以前的c++ 就是一个h文件，写一堆声明，cpp一堆实现，我们只需要引入h文件就能使用那些函数，类，等等，实现，是靠链接器去找的，声明，是直接#include直接把那个
	//文件那里面的声明复制过来，在当前翻译单元，编译器看到你有声明，然后你使用那些函数、、、、就不会报错，让链接器去找，在连接的时候
}