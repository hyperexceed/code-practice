#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//暴力解法
/*int drop(int* pnums, int val, int sz)
{
	int i = 0;
	int j = 0;
	int count = sz;
	//定义新数组存放不需要删除的数字
	int a[8] = { 0 };
	//遍历数组nums
	for (i = 0;i < sz;i++)
	{
		//如果当前数字不是要删除的，就把它存入新数组a,并且直接放入原数组的对应位置
		//让新数组下标加1，准备放第二个数字
		if (*(pnums + i) != val)
		{
			a[j] = *(pnums + i);
			*(pnums + j) = a[j];
			j++;
		}
		//如果是要删除的，就让数组长度减一，代表删除了这个数字后的数组长度
		if (*(pnums + i) == val)
		{
			count--;
		}
	}
	//返回更新后的数组长度count
	return count;
}
void print(int* pnums, int len)
{
	int i = 0;
	for (i = 0;i < len;i++)
	{
		printf("%d", *(pnums + i));
	}
}
int main()
{
	//需要操作的数组
	int nums[8] = { 0,1,2,2,3,0,4,2 };
	//要删除的数字
	int val = 2;
	//数组的长度计算
	int sz = sizeof(nums) / sizeof(nums[0]);
	//返回删除后的数组长度
	int len = drop(nums, val,sz);
	//打印更改后的数组
	print(nums, len);
	return 0;
}*/


//双指针
int drop(int* pnums, int val, int sz)
{
	int i = 0;
	int j = 0;
	int count = sz;
	//遍历数组nums
	for (i = 0;i < sz;i++)
	{
		//如果当前数字不是要删除的，就把它放到当前数组的前面
		//让数组下标(j)加1，准备放第二个数字
		if (*(pnums + i) != val)
		{
			*(pnums + j) = *(pnums + i);
			j++;
		}
		//如果是要删除的，就让数组长度减一，代表删除了这个数字后的数组长度
		if (*(pnums + i) == val)
		{
			count--;
		}
	}
	//返回更新后的数组长度count
	return count;
}
void print(int* pnums, int len)
{
	int i = 0;
	for (i = 0;i < len;i++)
	{
		printf("%d", *(pnums + i));
	}
}
int main()
{
	//需要操作的数组
	int nums[4] = { 3,2,2,3 };
	//要删除的数字
	int val = 3;
	//数组的长度计算
	int sz = sizeof(nums) / sizeof(nums[0]);
	//返回删除后的数组长度
	int len = drop(nums, val, sz);
	//打印更改后的数组
	print(nums, len);
	return 0;
}