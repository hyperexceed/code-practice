#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.ð������
/*void incorporate(int* num1, int m, int* num2)
{
	//������2�����ַ�������1��
	//����1ֻ����3��ֵ�������Զ���0
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
	//����
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
	//num1����
	int m = sizeof(num1) / sizeof(num1[0]);
	//���벢����
	incorporate(num1, m, num2);
	//��ӡ
	output(num1, m);
	return 0;
}*/



//2.˫ָ��
void compose(int* num1,int sz,int* num2)
{
	//�ֱ�������ָ�룬ÿ����ָ����������һλʵ������(���Ǳ������Լ��ӵ�0)
	int i = 2;
	int j = 2;
	int n = sz - 1;
	while(j >= 0)
	{
		//��������������,���Աض���һ������
		//�����һ�����������ֵ
		//��ô������־�Ҫ�ŵ�����1������
		//���˵�λ�ñ�ʹ���ˣ�����Ҫ��ǰŲһλ��������һ���ν�
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