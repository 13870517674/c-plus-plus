#include<iostream>
#include<complex>//�ṩ������ԭ��

using namespace std;
void test1()
{

	complex<double> z(2, 3);
	complex<double> z1 = z + 5.0;
	cout << z1 << endl;
	complex<double> z2 = z - 5.0;
	cout << z2 << endl;
	complex<double> z3 = z * 2.0;
	cout << z3 << endl;
	complex<double>z4 = z / complex<double>(1, 1);
	cout << z4 << endl;
}
int main()
{
	test1();
	complex<double>z(2, 3);
	complex<double>z1;
	complex<double>z2(z);

	cout << z << endl;
	cout << z1 << endl;
	cout << z2 << endl;
	z.real(22);
	z.imag(33);//�޸�z��ʵ�����鲿��ֵ
	cout << z << endl;

	complex<double>a, b, c;
	cout << "����������������";
	cin >> a >> b >> c;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}