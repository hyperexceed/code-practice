#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������Ԫ�ص�ַ��ʹ��ָ���������
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

	//j�����������Ƚϵ������±�
	//j��Ҫ����һ�������飬��Ϊȫ�����ֶ���Ҫ�Ƚ�һ��,����j<=9����ѭ��
	//���ڵ�һ��Ԫ�ز���Ҫ�Լ��Ƚ��Լ�������j=1-->�ӵڶ���Ԫ�ؿ�ʼ
	for (j = 1;j <= 9;j++)
	{
		//nums+iΪ��ָ�룬�������Ҫ�滻��Ԫ�صĵ�ַ
		//nums+jΪ��ָ�룬������ǽ��бȽϵ�ֵ
		if (*(nums + i) != *(nums + j))
		{
			//��ָ��ָ��Ŀռ��ֵ����ָ��ָ���ֵ��ͬ������ָ��+1��������ֵ���滻
			//��ָ������ƶ�һλ
			i++;
			*(nums + i) = *(nums + j);
		}
		//��ͬ�Ͳ������滻����ָ�뻹��ԭλ,����ָ���ƶ�һλ

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
	//���������е�Ԫ��
	input(nums);
	//ɾ����ͬԪ��
	drop(nums);
	//���ɾ����ͬԪ�غ������
	print(nums);
	return 0;
}

