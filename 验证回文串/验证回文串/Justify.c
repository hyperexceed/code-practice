#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
//�������
/*int isPalindrome(char* s) {
    //�����ַ�������
    int sLen = strlen(s);
    int i = 0;
    int j = 0;
    for (i = 0;i < sLen;i++)
    {
        //���ֲ������������ַ�,����i����ȫ���ַ���ǰ�ƶ�һ��
        //isalnum-->�ж��ǲ������ֻ���ĸ�ַ�
        //�Ƿ��ط�0
        //���Ƿ���0
        //����ȡ��,���Ƿ����������ַ������ƶ����ַ�
        //�������ƶ�
        if (i != sLen - 1 && !(isalnum(s[i])))
        {
            for (j = i;j < sLen;j++)
            {
                s[j] = s[j + 1];
            }
            //����-1��ʾ�Ƴ���һ���������������ַ�
            sLen--;
        }
        //��������һ���ַ�������������ֱ����Ϊ'\0'
        else if (i == sLen - 1 && !(isalnum(s[i])))
        {
            s[i] = '\0';
        }
    }

    //�ж��ǲ��ǻ��Ĵ�
    //i,j���������м��ƶ����ж��Ƿ��������ĸ������
    i = 0;
    j = sLen - 1;
    int count = 0;
    //�������ַ���ȵĸ���
    int cmp = sLen / 2;
    while (i < j)
    {
        //�Ǵ�д�ַ�תСд�����ж�
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
        printf("�ǻ��Ĵ�");
    }
    else
    {
        printf("����");
    }
    return 0;
}*/



//ʹ�õڶ����ַ�����˫ָ��
int judge(char* c, int left, int right)
{
    int count = 0;
    //�ַ�������/2���������ķ���Ҫ��Ļ��ĸ���
    int num = (right + 1) / 2;
    //���left >= right,˵������ָ����һ��λ�ã��򽻴�
    //���ñȽ�
    while (left < right)
    {
        if (c[left] == c[right])
        {
            count++;
        }
        //ֻҪ����ͬ��˵�����ǻ��ģ������н��������ж�
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
    //����ڶ����ַ��������ĸ�������ַ�
    char copy[30] = "";
    int i = 0;
    int j = 0;
    //�ַ���������־��\0
    while (s[i] != '\0')
    {
        //�жϵ�ǰ�ַ��ǲ�����ĸ�������ַ�
        if (isalnum(s[i]))
        {
            //�ж��ǲ��Ǵ�д��ĸ
            if (isupper(s[i]))
            {
                //ת����Сд��ĸ,����ڶ����ַ���
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
    //�ж��ǲ��ǻ��Ĵ�
    return judge(copy, 0, strlen(copy) - 1);
}
int main()
{
    //char s[31] = "A man, a plan, a canal: Panama";
    char s[31] = "race a car";
    //��֤���Ĵ�---��д��ĸתСд���ѷ�������ĸ�ַ�ȥ������֤
    int n = isPalindrome(s);
    //nΪ1ʱ���ǻ��Ĵ�
    if (n == 1)
    {
        printf("�ǻ��Ĵ�");
    }
    //0�Ͳ���
    else
    {
        printf("���ǻ��Ĵ�");
    }
    return 0;
}