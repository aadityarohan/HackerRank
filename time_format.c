#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int timeConversion(char s[])
{
    char temp[2];
    int hh;
    strncpy(temp, s, 2);
    hh = atoi(temp);
    if (s[8] == 'A')
    {
        if (hh == 12)
            hh = 00;
    }
    if (s[8] == 'P')
    {
        if (hh != 12)
            hh += 12;
    }
    return hh;
}
int main()
{
    char s[10], temp[10], hh;
    scanf("%s", s);
    hh = timeConversion(s);
    for (int i = 0; i < 8; i++)
        temp[i] = s[i + 2];
    if (s[8] == 'A')
        printf("0");
    printf("%d", hh);
    for (int i = 0; i < 6; i++)
        printf("%c", temp[i]);
    return 0;
}