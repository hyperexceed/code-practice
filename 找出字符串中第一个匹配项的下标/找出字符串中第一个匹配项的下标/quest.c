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
	//存储匹配的第一个字符的下标
	int tag = 0;
	//计算字符串长度
	int sLen = my_strlen(s);
	int sNeedle = my_strlen(needle);
	//遍历字符串
	for (i = 0;i < sLen;i++)
	{
		//如果找到与第二个字符串相同的字符
		//j++,对比下一个,并让count++
		if (s[i] == needle[j])
		{
			count++;
			j++;
			//如果count是1，说明匹配到了第一个字符
			//将这个字符的下标存起来
			if (count == 1)
			{
				tag = i;
			}
		}
		//如果中途没有找到相同的字符
		//count变为0,重新计数
		else if (s[i] != needle[j])
		{
			count = 0;
		}
		//如果count等于第二个字符串的长度
		//说明对比完成
		//返回下标
		if (count == sNeedle)
		{
			return tag;
		}
	}
	//如果对比完了所有字符，都不符合条件
	//直接返回-1
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