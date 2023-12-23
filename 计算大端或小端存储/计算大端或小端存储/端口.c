#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.
//使用char*类型的指针变量c
//访问a的第一个内存单元
/*int judge_sys(char* c)
{
	int tmp = 0;
	//是小端返回1，是大端返回0
	if (*c == 1)
		return tmp = 1;
	else
		return tmp;
}
int main()
{
	int a = 1;
	//传入a的地址
	int b = judge_sys(&a);
	if (b == 1)
		printf("小端");
	else
		printf("大端");
	return 0;
}*/


//2.
//使用联合体
//
typedef union un
{
	int a;
	char b;
}un;
int judge_sys(un* c)
{
	c->a = 1;
	int tmp = 0;
	if (c->b == 1)
	{
		return tmp = c->b;
	}
	else 
	{
		return tmp;
	}
}
int main()
{
	un c;
	int ret = judge_sys(&c);
	if (ret == 1)
	{
		printf("是小端");
	}
	else
	{
		printf("是大端");
	}
	return 0;
}