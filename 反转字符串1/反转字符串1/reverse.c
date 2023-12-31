#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void reverse(char* s, int len)
{
	int i = 0;
	int j = len - 1;
	//������ָ�룬һ��ָ��ָ���ʼ��λ��
	//һ��ָ������λ�ã�������ָ��ָ����ַ�����
	//�������ָ�뽻���������ͬ��λ�ã�˵������Ҫ����
	while (i < j)
	{
		//������
		//3 ^ 3 = 0
		//0 ^ 3 = 3
		//3 ^ 0 ^ 0 = 3
		s[i] = s[i] ^ s[j];
		s[j] = s[i] ^ s[j];
		s[i] = s[i] ^ s[j];
		//��ָ������
		i++;
		//��ָ������
		j--;
	}
}
int main()
{
	char s[6] = "hello";
	int str_len = strlen(s);
	//��ת
	reverse(s, str_len);
	//��ӡ
	puts(s);
	return 0;
}