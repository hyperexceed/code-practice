#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void input(int* parr,int* sz)
{
	int i = 0;
	for (i = 0;i < *sz;i++)
	{
		scanf("%d", parr + i);
	}
}
int* sum(int* arr, int* sz, int* code)
{
	int target = 0;
	//����Ŀ���
	scanf("%d", &target);
	int i = 0;
	int j = 0;
	//Ƕ��ѭ������ÿ�����ĺ�����
	for (i = 0;i < *sz;i++)
	{
		//���ڵ�i��Ԫ��ǰ�����Ѿ����ӹ������Բ�������һ��
		for (j = i + 1;j < *sz;j++)
		{
			if ((*(arr + i) + *(arr + j)) == target)
			{
				//ͨ��ָ�����code�������÷��ʵ�code����������
				//���Ϊ�±�i
				*code = i;
				//����ֵ����Ϊint*���͵�ָ����������Է���һ����ַ
				return &j;
			}
		}
	}
}
int main()
{
	int arr[3] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�����±�1(i);
	//
	int code = 0;
	//��������
	input(arr,&sz);
	//����
	int* pj = sum(arr, &sz,&code);
	//ʹ��pjָ���������j���ڴ�λ���е�����
	printf("[%d,%d]", code, *pj);
	return 0;
}