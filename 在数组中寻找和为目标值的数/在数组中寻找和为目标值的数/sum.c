#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void input(int* parr,int* sz)
{
	int i = 0;
	for (i = 0;i < *sz;i++)
	{
		scanf("%d", parr + i);
	}
}
int* sum(int* arr, int* sz, int* code)
{
	int target = 0;
	//输入目标和
	scanf("%d", &target);
	int i = 0;
	int j = 0;
	//嵌套循环进行每个数的和运算
	for (i = 0;i < *sz;i++)
	{
		//由于第i个元素前的数已经被加过，所以不用再算一遍
		for (j = i + 1;j < *sz;j++)
		{
			if ((*(arr + i) + *(arr + j)) == target)
			{
				//通过指针变量code，解引用访问到code变量的数据
				//变更为下标i
				*code = i;
				//返回值类型为int*类型的指针变量，所以返回一个地址
				return &j;
			}
		}
	}
}
int main()
{
	int arr[3] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//接收下标1(i);
	//
	int code = 0;
	//输入数字
	input(arr,&sz);
	//计算
	int* pj = sum(arr, &sz,&code);
	//使用pj指针变量访问j的内存位置中的数据
	printf("[%d,%d]", code, *pj);
	return 0;
}