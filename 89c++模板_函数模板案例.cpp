//#include<iostream>
//using namespace std;
//
////ʵ��ͨ�� �������������ĺ���
////���� �Ӵ�С
////�㷨 ѡ��
////���� char���顢int����
//
////��������ģ��
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�����㷨
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶����ֵ�±�
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;//�������ֵ�±�
//			}
//		}
//		if (max != i)
//		{
//			//����max��i��Ԫ��
//			mySwap(arr[i], arr[max]);
//		}
//	}
//}
//
////�ṩ��ӡ����ģ��
//template<class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//����char����
//	char charArr[] = "abcdefg";
//	mySort(charArr, 7);//����
//	printArray(charArr, 7);//���
//}
//
//void test02()
//{
//	//����int����
//	int intArr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	mySort(intArr, 10);//����
//	printArray(intArr, 10);//���
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}