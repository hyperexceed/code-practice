#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//��������������
	int x = 0;
	scanf("%d", &x);
	//�Ϸ���������������/2 + 1
	//�����м��������ǵ�ֻ��һ��
	//��������ֻ��������
	int up = x / 2 + 1;
	int down = x / 2;
	//i������Ҫ��ӡ���ǵĵ�ǰ��
	int i = 1;
	//jΪ��Ҫ��ӡ�Ŀո�����Ǹ���
	int j = 0;
	//�Ϸ�
	for (i = 1;i <= 7;i++)
	{
		//�ȿո�
		for (j = 1;j <= up - i;j++)
		{
			printf(" ");
		}
		//������
		for (j = 1;j <= i * 2 - 1;j++)
		{
			printf("*");
		}
		//��ӡ��һ�к���
		printf("\n");
	}
	//�·�
	for (i = 0;i < 6;i++)
	{
		//�ո�
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