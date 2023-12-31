#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
//错误写法，个位数时会越界
/*int* plus(int* parr, int sz)
{
	int i = 0;
	//计算总共需要动态分配的空间大小
	int totalSize = sz * 4;
	//malloc返回void类型指针
	//强制类型转换成int类型
	int* address = (int*)malloc(totalSize);
	//判断是否为空指针,为空指针说明问题所在区域
	if (address == NULL || parr == NULL)
	{
		perror("地址");
	}
	for (i = sz - 1;i >= 0;i--)
	{
		//如果当前位是9或10(是10说明是后方进位得到的),直接置0,再让前面的数字+1
		if (parr[i] == 9 || parr[i] == 10)
		{
			parr[i] = 0;
			parr[i - 1] += 1;
		}
		//如果是最后一位，让这一位加1
		else if (i == sz - 1)
		{
			parr[i] += 1;
		}
		//把当前arr里的元素给到动态分配的空间里
		*(address + i) = *(parr + i);
	}
	return address;
}
int main()
{
	int arr[4] = { 4,9,9,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* ret = plus(arr, sz);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d", ret[i]);
	}
	return 0;
}*/



//正确写法
void plus(int* pa, int sz)
{
	int i = 0;
	//从后向前遍历数组
	for (i = sz - 1;i >= 0;i--)
	{
		//如果从最后一位以及前面有连续的9
		//置0来完成进位
		if (pa[i] == 9)
		{
			pa[i] = 0;
		}
		//不是9直接+1并结束进位
		else if (pa[i] != 9)
		{
			pa[i] += 1;
			break;
		}
	}
}
void output(int* pa, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", pa[i]);
	}
}
int main()
{
	int a[4] = { 4,9,9,9 };
	int sz = sizeof(a) / sizeof(a[0]);
	//加一
	plus(a, sz);
	//打印
	output(a, sz);
	return 0;
}