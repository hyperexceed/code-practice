#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(char* string)
{
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string += 1;
	}
	return count;
}
int probe(char* s, char* needle)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//�洢ƥ��ĵ�һ���ַ����±�
	int tag = 0;
	//�����ַ�������
	int sLen = my_strlen(s);
	int sNeedle = my_strlen(needle);
	//�����ַ���
	for (i = 0;i < sLen;i++)
	{
		//����ҵ���ڶ����ַ�����ͬ���ַ�
		//j++,�Ա���һ��,����count++
		if (s[i] == needle[j])
		{
			count++;
			j++;
			//���count��1��˵��ƥ�䵽�˵�һ���ַ�
			//������ַ����±������
			if (count == 1)
			{
				tag = i;
			}
		}
		//�����;û���ҵ���ͬ���ַ�
		//count��Ϊ0,���¼���
		else if (s[i] != needle[j])
		{
			count = 0;
		}
		//���count���ڵڶ����ַ����ĳ���
		//˵���Ա����
		//�����±�
		if (count == sNeedle)
		{
			return tag;
		}
	}
	//����Ա����������ַ���������������
	//ֱ�ӷ���-1
	return -1;
}
int main()
{
	char s[9] = "leetcode";
	char needle[6] = "leeto";
	int lable = probe(s, needle);
	printf("%d", lable);
	return 0;
}