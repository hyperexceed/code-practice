#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int probe(int* a, int n,int length)
{
	int i = 0;
	//ʹ��count����ʾС��ҪѰ�ҵ����ֵ�Ԫ�صĸ���
	//ͬʱҲ��Ҫ������±�
	int count = 0;
	//��������Ƚ�����
	//��������������,���ԣ�Ҫ�����λ�õ��±꣬����С������������ֵĸ���
	for (i = 0;i < length;i++)
	{
		if (*(a + i) < n)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a[4] = { 1,3,5,6 };
	int n = 0;
	int sz = sizeof(a) / sizeof(a[0]);
	//����Ҫ���ҵ�����
	scanf("%d", &n);
	//����
	int loc = probe(a, n,sz);
	fprintf(stdout, "%d", loc);
	return 0;
}