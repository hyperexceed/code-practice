#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//传入首元素地址，使用指针变量接收
void input(int* nums)
{
	int i = 0;
	for (i = 0;i <= 9;i++)
	{
		scanf("%d", nums + i);
	}
}
void drop(int* nums)
{
	int i = 0;
	int j = 0;

	//j代表了用来比较的数的下标
	//j需要遍历一整个数组，因为全部数字都需要比较一遍,所以j<=9进入循环
	//由于第一个元素不需要自己比较自己，所以j=1-->从第二个元素开始
	for (j = 1;j <= 9;j++)
	{
		//nums+i为左指针，代表的是要替换的元素的地址
		//nums+j为右指针，代表的是进行比较的值
		if (*(nums + i) != *(nums + j))
		{
			//左指针指向的空间的值与右指针指向的值不同，让左指针+1，并进行值的替换
			//右指针向后移动一位
			i++;
			*(nums + i) = *(nums + j);
		}
		//相同就不进行替换，左指针还在原位,让右指针移动一位

	}

}
void print(int* nums)
{
	int i = 0;
	for (i = 0;i <= 4;i++)
	{
		printf("%d", *(nums + i));
	}
}
int main()
{
	int nums[10] = { 0 };
	//输入数组中的元素
	input(nums);
	//删除相同元素
	drop(nums);
	//输出删除相同元素后的数组
	print(nums);
	return 0;
}

