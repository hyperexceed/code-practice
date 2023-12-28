#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int probe(int* a, int n,int length)
{
	int i = 0;
	//使用count来表示小于要寻找的数字的元素的个数
	//同时也是要插入的下标
	int count = 0;
	//遍历数组比较数字
	//由于是有序数组,所以，要插入的位置的下标，就是小于这个数的数字的个数
	for (i = 0;i < length;i++)
	{
		if (*(a + i) < n)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a[4] = { 1,3,5,6 };
	int n = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	//输入要查找的数字
	scanf("%d", &n);
	//查找
	int loc = probe(a, n,sz);
	fprintf(stdout, "%d", loc);
	return 0;
}