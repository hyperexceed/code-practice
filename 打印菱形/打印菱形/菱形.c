#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//自行输入总行数
	int x = 0;
	scanf("%d", &x);
	//上方行数就是总行数/2 + 1
	//由于中间铺满星星的只有一行
	//所以输入只能是奇数
	int up = x / 2 + 1;
	int down = x / 2;
	//i代表所要打印星星的当前行
	int i = 1;
	//j为需要打印的空格和星星个数
	int j = 0;
	//上方
	for (i = 1;i <= 7;i++)
	{
		//先空格
		for (j = 1;j <= up - i;j++)
		{
			printf(" ");
		}
		//后星星
		for (j = 1;j <= i * 2 - 1;j++)
		{
			printf("*");
		}
		//打印完一行后换行
		printf("\n");
	}
	//下方
	for (i = 0;i < 6;i++)
	{
		//空格
		for (j = 1;j <= i + 1;j++)
		{
			printf(" ");
		}
		for (j = 1;j <= ((2 * down) - 1);j++)
		{
			printf("*");
		}
		printf("\n");
		down--;
	}
	return 0;
}