#include <stdio.h>
#include <string.h>
int superReducedString(char s[])
{
    int count_all[1000], length = strlen(s), count_flag[1000], flag = 0;
    char s_final[1000];
    for (int n = 0; n < length; n++) // count for empty
    {
        int var = 1;
        for (int o = 0; o < length; o++)
        {
            if (n != o && s[n] == s[o])
                var++;
        }
        count_flag[n] = var;
        if (count_flag[n] % 2 == 0)
            flag++;
    }
    for (int i = 0; i < length; i++) // count and remove same letter
    {
        int count = 1;
        for (int j = 0; j < length; j++)
        {
            if (i != j && s[i] == s[j] && s[i] != ' ')
            {
                count++;
                s[j] = ' ';
            }
            count_all[i] = count;
        }
    }
    for (int k = 0; k < length; k++) // remove even count
    {
        if (count_all[k] % 2 == 0)
            s[k] = ' ';
    }
    for (int l = 0, a = 0; l < length; l++) // store in another array
    {
        if (s[l] >= 97 && s[l] <= 122)
        {
            s_final[a] = s[l];
            a++;
        }
    }
    if (flag == length) // print
        printf("Empty String");
    if (flag < length) // print
        printf("%s", s_final);
    return 0;
}
int main()
{
    char s[1000];
    scanf("%s", &s);
    superReducedString(s);
    return 0;
}