#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void rewrite(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < sz;)
	{
		//�����ǰλ��0��׼����д
		if (arr[i] == 0)
		{
			//��j�ӵ�����һλ��ʼ���������������������ƶ�һλ
			//ֱ������i�󷽵�һ��Ԫ�أ���дi��ָ���0
			//��д��������ǰ�ƶ�
			for (j = sz - 1;j > i;j--)
			{
				arr[j] = arr[j - 1];
			}
			//���ں󷽸�д��һ��0��������i+2���������д��0
			i += 2;
		}
		//iָ���Ԫ�ز���0��û�и�д
		//+1����һ������0
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
	//�������鳤��
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��д0
	rewrite(arr, sz);
	//��ӡ
	output(arr, sz);
	return 0;
}