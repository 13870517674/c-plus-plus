////114�涯̬�ڴ�Ĵ���
//#include<iostream>
//using namespace std;
//void arr(int** a, int num)//�����ʽ1c��ʹ��ָ��ָ���ָ��
//{
//	*a = new int[num];
//}
//void arr2(int*& a, int num)//�������2ʹ������&
//{
//	a = new int[10];
//}
//int main()
//{
//	int* p = NULL;
//	arr(&p, 10);//�����ڴ�
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i*10;//ѭ����ֵ
//	}
//	for (int i = 0; i < 10; i++)cout << p[i] << " " ;//���
//	cout << endl;
//
//	int* q = NULL;
//	arr2(q, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i * 5;//ѭ����ֵ
//	}
//	for (int i = 0; i < 10; i++)cout << p[i] << " " ;//���
//	delete[] p;
//	delete[] q;
//	return 0;
//}
////���ϵ�д��ʵ����ֵ����
////c++�Ƽ�ʹ�����û᷽��ܶ�

////122���ַ���
//#include<iostream>
//using namespace std;
//void arr(char* av)
//{
//	if (av == NULL)
//	{
//		cout << "��" << endl;
//		return;
//	}
//	else
//	{
//		cout << "���" << endl;
//	}
//}
//int main()
//{
//	char str[10] = { 0 };//str��ָ��ջ��һ���СΪ10��int�������ڴ�
//	char* av = NULL;//avָ���
//	arr(str);//����������
//	arr(av);//����� 
//	return 0;
//}

//122�棬��дintת�ַ�������
//#include<iostream>
//using namespace std;
//void int_str(char* str, int num)
//{
//	int temp = num > 0 ? num : -num;
//
//	int i = 0;
//	if (str == NULL)
//	{
//		cout << "��";
//		return;
//	}
//	while (temp)
//	{
//		temp /= 10;
//		i++;
//	}
//	if (num < 0)
//	{
//		i++;
//	}
//	str[i] = 0;
//	while (num)
//	{
//		--i;
//		str[i] = '0'+ num % 10;
//		num /= 10;
//	}
//	if (i != 0)
//	{
//		str[i] = '-';
//	}
//}
//int main()
//{
//	int i = 0;
//	cout << "���������ַ�������";
//	cin >> i;
//	char *str=new char[i+1];//����������΢����һ�£��Զ������λ��
//	int num;
//	cin >> num;
//	int_str(str, num);
//	cout << str << endl;
//	delete[] str;
//	return 0;
//}
//ʹ�ÿ⺯���ķ�ʽ
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int number1 = 123456;
//    int number2 = -123456;
//    char string[16] = { 0 };
//    itoa(number1, string, 10);//ʹ�ÿ⺯�����е�ת��
//    printf("���֣�%d ת������ַ���Ϊ��%s\n", number1, string);
//    itoa(number2, string, 10);
//    printf("���֣�%d ת������ַ���Ϊ��%s\n", number2, string);
//    return 0;
//}

//124���ַ���תΪ����
//#include<iostream>
//using namespace std;
//int str_int(const char* str)
//{
//	const char* str2 = str;
//	int temp = 0;
//	while (*str2!=NULL)
//	{
//		if (*str2 == '-')//Ϊ���ž�����
//		{
//			str2++;
//		}
//		if (*str2 <'0' || *str2 >'9')
//		{
//			break;
//		}
//		temp = temp * 10 + ( * str2 - '0');
//		str2++;
//	}
//	if (*str == '-')//�����һ������Ϊ-,��ô��ת�ɸ���
//	{
//		return temp = -temp;
//	}
//
//	return temp;
//}
//int main()
//{
//	char str[15];
//	cin >> str;//���븳ֵ
//	int num = str_int(str);
//	cout << num << endl;
//}

////126�Լ�ʵ��strcpy����
//#include<iostream>
//using namespace std;
//char* My_Strcpy(char* str, const char* p)
//{
//	char* str_ = str;
//	while (*str_++ = *p++);
//	return str;
//}
//int get_strlen(const char* str)//��ʹ��strlen����ʹ���Լ�д�ĺ�������һ��
//{
//	int i = 0;
//	while (*str++)
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char ch[10] = "abcdef";
//	char ch2[10];
//	int num=get_strlen(My_Strcpy(ch2, ch));
//	cout << num << endl;//�������
//	cout << ch2 << endl;//����ַ���
//}
////strcpy����ʹ��char*��Ϊ����ֵ��Ϊ����ʽ���ʽ������������

//128����дʵ��memcpy����
//#include<iostream>
//#include<cassert>//�ṩassert���Ժ���
//using namespace std;
//void* My_Memstry(void* str, const void* str2,size_t num)
//{
//	assert(str != NULL && str2 != NULL&&num>0);//���Ժ����жϣ�������Ϊ��ͼ���ִ�У�Ϊ�پͽ�������
//	char* str_ = (char*)str;//����ԭʼ��ַ,ͬʱǿת
//	const char* str2_ = (char*)str2;//����ԭʼ��ַ
//	while (num--)
//	{
//		*str_++ = *str2_++;
//	}
//	return str;
//}
//int main()
//{
//	char ch1[10];
//	char ch2[10] = "abcdefg";
//	char *ch3=NULL;
//	ch3=(char*)My_Memstry(ch1, ch2, 3);//����ֵҲ��ǿת
//	cout << ch3 << endl << ch1 << endl;
//	return 0;
//}

////133�� �ֶ�ʵ��strstr����
//#include<iostream>
//using namespace std;
//const char* my_Strstr(const char* str1, const char* str2)
//{
//	const char* str1_ = str1;
//	const char* str2_ = str2;//�ȸ���һ��
//	if (str1_ == NULL || str2_ == NULL)//ȷ������Ч�ַ���
//	{
//		return str1;
//	}
//	while (*str1)//��ѭ������str1
//	{
//		str1_ = str1;
//		str2_ = str2;
//
//		while (*str1_++ == *str2_++)
//		{
//			if (*str2_ == NULL)
//			{
//				return str1;
//			}
//		}
//		str1++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char a[20] = "aa������bb��";
//	const char b[10] = "����";
//
//	const char *p=my_Strstr(a, b);//���ú���
//	cout << p << endl;
//	return 0;
//}

////137���ʵ��strcmp����
//#include<iostream>
//using namespace std;
//#include<cassert>
//#include<cstring>
//
//int my_Strcmp(const char* str1, const char* str2)
//{
//	//���Ժ��� Ϊ��ͼ���ִ��
//	assert(!(str1 == NULL && str2 == NULL));
//	int num = 0;
//    while ((*str1 != '\0') && (*str1 == *str2))
//    {
//        str1++;
//        str2++;
//    }
//    num = *str1 - *str2;
//    return num;
//}
//
//int main()
//{
//    const char a[]{ "������" };
//    const char b[]{ "������" };
//
//    int i=my_Strcmp(a, b);
//    cout << i << endl;
//    //�⺯��������
//    int v = strcmp(a, b);
//    cout << v << endl;
//	return 0;
//}

////141��10�������������ö����Ʒ�ʽ���
//#include<iostream>
//using namespace std;
//void base(int num)
//{
//	int i = num;
//	int ave[1024]{ 0 };
//
//	int v = 0;
//	while (num)
//	{
//		ave[v] = num % 2;
//		v++;
//		num /= 2;
//	}
//	//�������Ҳ���Ǵ�������Ŀ�����1��Ϊv�����һ
//	for (int i = v - 1; i >= 0; i--)
//		cout << ave[i];
//}
//int main()
//{
//	base(8);
//	return 0;
//}

//2����ת10���ƣ�c����д��
//#include<stdio.h>
//#include<math.h>
//int func(int n[], int i) {
//	int num = 0;
//	int t = 0;
//	for (int a = i - 1; a >= 0; a--, t++) {
//		if (n[a] == 0)continue;
//		num += 1 << t;
//	}
//	return num;
//}
//int main()
//{
//	int n[7]{ 1,0,1,0,1,1,1 };
//	printf("%d", func(n, 7));
//	return 0;
//}
