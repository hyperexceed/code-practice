#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*void reverse(int j, int p, char* s)
{
	//����ָ��ָ��ĵ�ַ������ָ��ָ��ĵ�ַ
	//˵���������
	while (j < p)
	{
		s[j] = s[j] ^ s[p];
		s[p] = s[j] ^ s[p];
		s[j] = s[j] ^ s[p];
		j++;
		p--;
	}
}
void judge(char* s, int len,int k)
{
	int i = 0;
	//��ָ��
	int j = 0;
	//��ָ��
	int p = 0;
	int count = 0;
	//�������鲢����
	for (i = 0;i < len;i++)
	{
		count++;
		if (count == 2 * k)
		{
			j = i - (k + 1);
			p = i - k;
			reverse(j, p, s);
			count = 0;
		}
		else if (i == len - 1 && count >= k && count < 2 * k)
		{
			j = i - k;
			p = i - 1;
			reverse(j, p, s);
		}
		else if (i == len - 1 && count < k)
		{
			j = i - count;
			p = i;
			reverse(j, p, s);
		}
	}
}
int main()
{
	char s[5] = "abcd";
	//strlen����'\0'����
	int length = strlen(s);
	//�ж�Ҫ��ת���ַ��ĸ���--����k
	int k = 2;
	//�ж��ַ�������
	judge(s,length,k);
	//��ӡ
	puts(s);
	return 0;
}*/


void reverse(char* s, int left, int right)
{
	//������ָ���������߽���
	//˵����ת���
	while (left < right)
	{
		s[left] = s[left] ^ s[right];
		s[right] = s[left] ^ s[right];
		s[left] = s[left] ^ s[right];
		left++;
		right--;
	}
}
void judge(char* s, int len,int k)
{
	int i = 0;
	//��i+=2k����ʾ������2k��Ԫ��
	for (i = 0;i < len;i += 2*k)
	{
		//��ת���ַ���k��ʱ
		//��ָ��ָ��Ҫ��ת���ַ���
		//�ĵ�һ���ַ�
		//��ָ��ָ��Ҫ��ת���ַ���
		//�����һ���ַ�
		if(i + k - 1 < len)
		reverse(s, i, i + k - 1);
		//��ת���ַ�����k��-->i+kԽ������ˣ�˵��ʣ����ַ�С��k��
		//��ʣ�µ��ַ�ȫ����ת
		//��ʱ����ָ��ָ��ľ��������ַ�����ĩβ
		//��ָ��ָ�����Ȼ��Ҫ��ת���ַ�������Ԫ��
		else if (i + (k - 1) >= len)
		{
			reverse(s, i, len - 1);
		}
	}
}
//�����ⷨ
int main()
{
	char s[9] = "abcdeghj";
	int str_len = strlen(s);
	int k = 3;
	//�жϲ���ת
	judge(s, str_len, k);
	//��ӡ
	puts(s);
	return 0;
}