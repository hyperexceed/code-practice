#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
/*void reverse(int j, int p, char* s)
{
	//当左指针指向的地址大于右指针指向的地址
	//说明交换完成
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
	//左指针
	int j = 0;
	//右指针
	int p = 0;
	int count = 0;
	//遍历数组并计数
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
	//strlen遇到'\0'结束
	int length = strlen(s);
	//判断要反转的字符的个数--数字k
	int k = 2;
	//判断字符串类型
	judge(s,length,k);
	//打印
	puts(s);
	return 0;
}*/


void reverse(char* s, int left, int right)
{
	//当左右指针相遇或者交错
	//说明反转完成
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
	//让i+=2k来表示计数到2k个元素
	for (i = 0;i < len;i += 2*k)
	{
		//反转的字符够k个时
		//左指针指向要反转的字符串
		//的第一个字符
		//右指针指向要反转的字符串
		//的最后一个字符
		if(i + k - 1 < len)
		reverse(s, i, i + k - 1);
		//反转的字符不够k个-->i+k越界访问了，说明剩余的字符小于k个
		//将剩下的字符全部反转
		//此时，右指针指向的就是整个字符串的末尾
		//左指针指向的仍然是要反转的字符串的首元素
		else if (i + (k - 1) >= len)
		{
			reverse(s, i, len - 1);
		}
	}
}
//正常解法
int main()
{
	char s[9] = "abcdeghj";
	int str_len = strlen(s);
	int k = 3;
	//判断并反转
	judge(s, str_len, k);
	//打印
	puts(s);
	return 0;
}