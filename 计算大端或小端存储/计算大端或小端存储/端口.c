#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.
//ʹ��char*���͵�ָ�����c
//����a�ĵ�һ���ڴ浥Ԫ
/*int judge_sys(char* c)
{
	int tmp = 0;
	//��С�˷���1���Ǵ�˷���0
	if (*c == 1)
		return tmp = 1;
	else
		return tmp;
}
int main()
{
	int a = 1;
	//����a�ĵ�ַ
	int b = judge_sys(&a);
	if (b == 1)
		printf("С��");
	else
		printf("���");
	return 0;
}*/


//2.
//ʹ��������
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
		printf("��С��");
	}
	else
	{
		printf("�Ǵ��");
	}
	return 0;
}