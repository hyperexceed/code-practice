#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.冒泡排序
/*void incorporate(int* num1, int m, int* num2)
{
	//将数组2的数字放入数组1后方
	//数组1只给了3个值，后面自动补0
	int i = 0;
	int j = 0;
	for (i = 0;i < m;i++)
	{
		if (*(num1 + i) == 0)
		{
			*(num1 + i) = *(num2 + j);
			j++;
		}
	}
	int tmp = 0;
	//排序
	for (i = 0;i < m - 1;i++)
	{
		if (*(num1 + i) > *(num1 + i + 1))
		{
			tmp = *(num1 + i);
			*(num1 + i) = *(num1 + i + 1);
			*(num1 + i + 1) = tmp;
		}
	}
}
void output(int* num1, int m)
{
	int i = 0;
	for (i = 0;i < m;i++)
	{
		printf("%d", *(num1 + i));
	}
}
int main()
{
	int num1[6] = { 1,2,3 };
	int num2[3] = { 2,5,6 };
	//num1长度
	int m = sizeof(num1) / sizeof(num1[0]);
	//插入并排序
	incorporate(num1, m, num2);
	//打印
	output(num1, m);
	return 0;
}*/



//2.双指针
void compose(int* num1,int sz,int* num2)
{
	//分别用两个指针，每个都指向数组的最后一位实际数字(不是编译器自己加的0)
	int i = 2;
	int j = 2;
	int n = sz - 1;
	while(j >= 0)
	{
		//由于是有序数组,所以必定有一个数组
		//的最后一个数字是最大值
		//那么这个数字就要放到数组1的最后端
		//最后端的位置被使用了，所以要往前挪一位，进行下一次衔接
		if (*(num1 + i) > *(num2 + j))
		{
			*(num1 + n) = *(num1 + i);
			i--;
		}
		else if (num1[i] == num2[j])
		{
			num1[i + 1] = num2[j];
			i--;
		}
		else if (*(num1 + i) < *(num2 + j))
		{
			*(num1 + n) = *(num2 + j);
			j--;
		}
		n--;
	}
}
void output(int* num1, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d", *(num1 + i));
	}
}
int main()
{
	int num1[3] = { 1,2,3 };
	int num2[3] = { 2,5,6 };
	int sz = sizeof(num1) / sizeof(num1[0]);
	compose(num1, sz, num2);
	output(num1, sz);
	return 0;
}