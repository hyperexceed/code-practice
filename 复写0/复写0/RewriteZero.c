#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void rewrite(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < sz;)
	{
		//如果当前位是0，准备复写
		if (arr[i] == 0)
		{
			//让j从倒数第一位开始遍历，把数字整体往后移动一位
			//直到遇见i后方的一个元素，复写i所指向的0
			//复写后不用再往前移动
			for (j = sz - 1;j > i;j--)
			{
				arr[j] = arr[j - 1];
			}
			//由于后方复写了一个0，所以让i+2跳过这个复写的0
			i += 2;
		}
		//i指向的元素不是0，没有复写
		//+1往下一个个找0
		else
			i++;
	}
}
void output(int* arr, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d", *(arr + i));
	}
}
int main()
{
	int arr[8] = { 1,0,2,3,0,4,5,0 };
	//计算数组长度
	int sz = sizeof(arr) / sizeof(arr[0]);
	//复写0
	rewrite(arr, sz);
	//打印
	output(arr, sz);
	return 0;
}