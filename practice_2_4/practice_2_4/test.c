#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ַ�ָ�룬���char���͵�ַ��ָ�룬�Ӽ��Լ������ò���һ���ֽڡ�
//int main()
//{
//	char *prt = "hello bit";//prt��ŵ��ǳ����ַ����ĵ�һ���ַ��ĵ�ַ��
//	printf("%s\n", prt);
//	return 0;
//}
//str1!=str2,��Ϊstr1��str2�����ַ����飬���Ų�ͬ���ڴ档
//str3=str4,��Ϊ�������ַ�ָ�붼��ŵ��ǳ����ַ��������ַ��ĵ�ַ��
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}
//����ָ��
//int (*arr)[10]
//arr����*��ϣ�˵������һ��ָ�룬����ָ�������Ϊint [10]��Ϊ���顣
//[]��*�Ľ���Ըߣ�����Ҫ��()��
//&��������ȡ����������ĵ�ַ������������Ԫ�صĵ�ַ����Ȼ��������ֵ��һ�������岻ͬ��
//���Ҷ�&���������мӼ���������һ�����顣
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//}
//����ָ���ʹ��
//void print1(int arr[2][3], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	printf("\n");
//}
//void print2(int (*arr)[3], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
//	print1(arr,2,3);
//	print2(arr,2,3);
//	return 0;
//}
//����ָ��
//��������Ϊ�����ĵ�ַ��������==&��������
//	void *p2()��һ���������Ǻ���ָ�룬��Ϊ���������ȼ�����*��
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	void(*p1)() = test;
//	return 0;
//}