#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数指针数组
//是一个数组，存放的是函数指针。
//如：int (*arr[10])();
//用法，如转移表
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add           2:sub \n");
//		printf(" 3:mul           4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}
//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
//个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
//函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
//条件进行响应。
//qsort的模拟实现
void print(int arr[], int  n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
void exa(char* n1, char* n2, int n)
{
	while (n)
	{
		char tmp = *n1;
		*n1 = *n2;
		*n2 = tmp;
		n1++;
		n2++;
		n--;
	}
}
void bubble_sort(void * arr, int width, int num, int(*cmp)(void* n1, void* n2))
{
	int i, j;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - i - 1; j++)
		{
			if ((cmp((char*)arr + j*width, (char*)arr + (j + 1)*width)>0))
			{
				exa((char*)arr + j*width, (char*)arr + (j + 1)*width, width);
			}
		}
	}
}
int cmp(void *n1, void *n2)
{

	return *(int*)n1 - *(int *)n2;
}
int main()
{
	int arr[] = { 3, 5, 4, 2, 1, 6, 8, 7, 9, 10 };
	bubble_sort(arr, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), cmp);
	print(arr, 10);
	return 0;
}
