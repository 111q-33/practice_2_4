#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//字符指针，存放char类型地址的指针，加减以及解引用操作一个字节。
//int main()
//{
//	char *prt = "hello bit";//prt存放的是常量字符串的第一个字符的地址。
//	printf("%s\n", prt);
//	return 0;
//}
//str1!=str2,因为str1和str2都是字符数组，有着不同的内存。
//str3=str4,因为这两个字符指针都存放的是常量字符串的首字符的地址。
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
//函数指针
//int (*arr)[10]
//arr先与*结合，说明它是一个指针，而它指向的类型为int [10]即为数组。
//[]比*的结合性高，所以要加()。
//&数组名即取出整个数组的地址，数组名是首元素的地址。虽然它们在数值上一样但意义不同，
//而且对&数组名进行加减都是跳过一个数组。
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
//数组指针的使用
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
//函数指针
//函数名即为函数的地址，函数名==&函数名。
//	void *p2()是一个函数不是函数指针，因为（）的优先级高于*。
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