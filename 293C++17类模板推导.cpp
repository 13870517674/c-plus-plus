#include<iostream>
#include<string>
#include<vector>
template<typename T>
struct S {
	T val;
};

S(const char*)->S<std::string>;   // ��S<�ַ���������>ӳ��ΪS<std::string>

template<typename T1, typename T2>
struct Pair3 {
    T1 first;
    T2 second;
    Pair3(const T1& x, const T2& y) : first{ x }, second{ y } {
    }
};
// Ϊ���캯��������Ƶ�ָ��
template<typename T1,typename T2>
Pair3(T1, T2)->Pair3<T1, T2>;

template<typename T1,typename T2>
class Test {
public:
    Test(T1 s1, T2 s2) :a(s1), b(s2) {}//ֻ��Ҫ��֤��Ӧģ�����͸������г�ʼ������
private:
    T1 a;
    T2 b;
    T1 d;
};

int main() {
    //������c++17��һЩ�򵥵��Ƶ����ǲ�����д��ģ���������
	S s("���Ͱ�");
	std::cout << typeid(s.val).name() << std::endl;
    Pair3 s2(1, "����");

    Test s3("����", 1);//�����������Ƶ�
}