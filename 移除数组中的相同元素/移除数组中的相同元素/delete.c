#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�����ⷨ
/*int drop(int* pnums, int val, int sz)
{
	int i = 0;
	int j = 0;
	int count = sz;
	//�����������Ų���Ҫɾ��������
	int a[8] = { 0 };
	//��������nums
	for (i = 0;i < sz;i++)
	{
		//�����ǰ���ֲ���Ҫɾ���ģ��Ͱ�������������a,����ֱ�ӷ���ԭ����Ķ�Ӧλ��
		//���������±��1��׼���ŵڶ�������
		if (*(pnums + i) != val)
		{
			a[j] = *(pnums + i);
			*(pnums + j) = a[j];
			j++;
		}
		//�����Ҫɾ���ģ��������鳤�ȼ�һ������ɾ����������ֺ�����鳤��
		if (*(pnums + i) == val)
		{
			count--;
		}
	}
	//���ظ��º�����鳤��count
	return count;
}
void print(int* pnums, int len)
{
	int i = 0;
	for (i = 0;i < len;i++)
	{
		printf("%d", *(pnums + i));
	}
}
int main()
{
	//��Ҫ����������
	int nums[8] = { 0,1,2,2,3,0,4,2 };
	//Ҫɾ��������
	int val = 2;
	//����ĳ��ȼ���
	int sz = sizeof(nums) / sizeof(nums[0]);
	//����ɾ��������鳤��
	int len = drop(nums, val,sz);
	//��ӡ���ĺ������
	print(nums, len);
	return 0;
}*/


//˫ָ��
int drop(int* pnums, int val, int sz)
{
	int i = 0;
	int j = 0;
	int count = sz;
	//��������nums
	for (i = 0;i < sz;i++)
	{
		//�����ǰ���ֲ���Ҫɾ���ģ��Ͱ����ŵ���ǰ�����ǰ��
		//�������±�(j)��1��׼���ŵڶ�������
		if (*(pnums + i) != val)
		{
			*(pnums + j) = *(pnums + i);
			j++;
		}
		//�����Ҫɾ���ģ��������鳤�ȼ�һ������ɾ����������ֺ�����鳤��
		if (*(pnums + i) == val)
		{
			count--;
		}
	}
	//���ظ��º�����鳤��count
	return count;
}
void print(int* pnums, int len)
{
	int i = 0;
	for (i = 0;i < len;i++)
	{
		printf("%d", *(pnums + i));
	}
}
int main()
{
	//��Ҫ����������
	int nums[4] = { 3,2,2,3 };
	//Ҫɾ��������
	int val = 3;
	//����ĳ��ȼ���
	int sz = sizeof(nums) / sizeof(nums[0]);
	//����ɾ��������鳤��
	int len = drop(nums, val, sz);
	//��ӡ���ĺ������
	print(nums, len);
	return 0;
}