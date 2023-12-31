#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void reverse(char* s, int len)
{
	int i = 0;
	int j = len - 1;
	//用两个指针，一个指针指向最开始的位置
	//一个指向最后的位置，让两个指针指向的字符调换
	//如果两个指针交错或者在相同的位置，说明不需要交换
	while (i < j)
	{
		//异或计算
		//3 ^ 3 = 0
		//0 ^ 3 = 3
		//3 ^ 0 ^ 0 = 3
		s[i] = s[i] ^ s[j];
		s[j] = s[i] ^ s[j];
		s[i] = s[i] ^ s[j];
		//左指针向右
		i++;
		//右指针向左
		j--;
	}
}
int main()
{
	char s[6] = "hello";
	int str_len = strlen(s);
	//反转
	reverse(s, str_len);
	//打印
	puts(s);
	return 0;
}