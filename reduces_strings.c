#include <stdio.h>
#include <string.h>
int superReducedString(char s[])
{
    int length = strlen(s), flag = 0;
    char s_final[1000];
    for (int n = 0; n < (length - 1); n++)
    {
        if (s[n] == s[n + 1])
        {
            s[n] = ' ';
            s[n + 1] = ' ';
        }
    }
    int a = 0;
    for (int m = 0; m < length; m++)
    {
        if (s[m] >= 97 && s[m] <= 122)
        {
            s_final[a] = s[m];
            a++;
            flag++;
        }
    }

    if (flag == length || length == 1)
        printf("Empty String");
    if (flag < length)
        printf(" %s", s_final);
    printf(" %d %d %d", strlen(s_final), length, flag);
    return 0;
}
int main()
{
    char s[1000];
    scanf("%s", &s);
    superReducedString(s);
    return 0;
}