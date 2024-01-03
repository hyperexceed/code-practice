#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//问题代码
/*int isPalindrome(char* s) {
    //计算字符串长度
    int sLen = strlen(s);
    int i = 0;
    int j = 0;
    for (i = 0;i < sLen;i++)
    {
        //发现不符合条件的字符,将第i个后方全部字符往前移动一格
        //isalnum-->判断是不是数字或字母字符
        //是返回非0
        //不是返回0
        //所以取反,当是符合条件的字符，不移动后方字符
        //不符合移动
        if (i != sLen - 1 && !(isalnum(s[i])))
        {
            for (j = i;j < sLen;j++)
            {
                s[j] = s[j + 1];
            }
            //长度-1表示移除了一个不符合条件的字符
            sLen--;
        }
        //如果是最后一个字符不符合条件，直接置为'\0'
        else if (i == sLen - 1 && !(isalnum(s[i])))
        {
            s[i] = '\0';
        }
    }

    //判断是不是回文串
    //i,j从两边往中间移动，判断是否与期望的个数相等
    i = 0;
    j = sLen - 1;
    int count = 0;
    //期望的字符相等的个数
    int cmp = sLen / 2;
    while (i < j)
    {
        //是大写字符转小写，再判断
        if (isupper(s[i]) || isupper(s[j]))
        {
            s[j] = tolower(s[j]);
            s[i] = tolower(s[i]);
        }
        if (s[i] == s[j])
        {
            count++;
        }
        i++;
        j--;
    }
    if (count == cmp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char s[31] = "A man, a plan, a canal: Panama";
    int a = isPalindrome(s);
    if (a == 1)
    {
        printf("是回文串");
    }
    else
    {
        printf("不是");
    }
    return 0;
}*/



//使用第二个字符串和双指针
int judge(char* c, int left, int right)
{
    int count = 0;
    //字符串长度/2就是期望的符合要求的回文个数
    int num = (right + 1) / 2;
    //如果left >= right,说明两个指针在一个位置，或交错
    //不用比较
    while (left < right)
    {
        if (c[left] == c[right])
        {
            count++;
        }
        //只要不相同，说明不是回文，不进行接下来的判断
        else
        {
            break;
        }
        left++;
        right--;
    }
    if (count == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isPalindrome(char* s)
{
    //定义第二个字符串存放字母或数字字符
    char copy[30] = "";
    int i = 0;
    int j = 0;
    //字符串结束标志是\0
    while (s[i] != '\0')
    {
        //判断当前字符是不是字母或数字字符
        if (isalnum(s[i]))
        {
            //判断是不是大写字母
            if (isupper(s[i]))
            {
                //转换成小写字母,放入第二个字符串
                copy[j] = tolower(s[i]);
            }
            else
            {
                copy[j] = s[i];
            }
            j++;
        }
        i++;
    }
    //判断是不是回文串
    return judge(copy, 0, strlen(copy) - 1);
}
int main()
{
    //char s[31] = "A man, a plan, a canal: Panama";
    char s[31] = "race a car";
    //验证回文串---大写字母转小写并把非数字字母字符去掉后验证
    int n = isPalindrome(s);
    //n为1时，是回文串
    if (n == 1)
    {
        printf("是回文串");
    }
    //0就不是
    else
    {
        printf("不是回文串");
    }
    return 0;
}