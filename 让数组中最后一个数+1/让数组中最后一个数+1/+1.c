#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
//����д������λ��ʱ��Խ��
/*int* plus(int* parr, int sz)
{
	int i = 0;
	//�����ܹ���Ҫ��̬����Ŀռ��С
	int totalSize = sz * 4;
	//malloc����void����ָ��
	//ǿ������ת����int����
	int* address = (int*)malloc(totalSize);
	//�ж��Ƿ�Ϊ��ָ��,Ϊ��ָ��˵��������������
	if (address == NULL || parr == NULL)
	{
		perror("��ַ");
	}
	for (i = sz - 1;i >= 0;i--)
	{
		//�����ǰλ��9��10(��10˵���Ǻ󷽽�λ�õ���),ֱ����0,����ǰ�������+1
		if (parr[i] == 9 || parr[i] == 10)
		{
			parr[i] = 0;
			parr[i - 1] += 1;
		}
		//��������һλ������һλ��1
		else if (i == sz - 1)
		{
			parr[i] += 1;
		}
		//�ѵ�ǰarr���Ԫ�ظ�����̬����Ŀռ���
		*(address + i) = *(parr + i);
	}
	return address;
}
int main()
{
	int arr[4] = { 4,9,9,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* ret = plus(arr, sz);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d", ret[i]);
	}
	return 0;
}*/



//��ȷд��
void plus(int* pa, int sz)
{
	int i = 0;
	//�Ӻ���ǰ��������
	for (i = sz - 1;i >= 0;i--)
	{
		//��������һλ�Լ�ǰ����������9
		//��0����ɽ�λ
		if (pa[i] == 9)
		{
			pa[i] = 0;
		}
		//����9ֱ��+1��������λ
		else if (pa[i] != 9)
		{
			pa[i] += 1;
			break;
		}
	}
}
void output(int* pa, int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", pa[i]);
	}
}
int main()
{
	int a[4] = { 4,9,9,9 };
	int sz = sizeof(a) / sizeof(a[0]);
	//��һ
	plus(a, sz);
	//��ӡ
	output(a, sz);
	return 0;
}