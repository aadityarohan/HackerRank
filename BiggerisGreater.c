#include <stdio.h>
#include <string.h>
int biggerIsGreater(char w[])
{
    int i = strlen(w) - 1;
    while (i > 0 && w[i - 1] >= w[i])
        i--;
    if (i <= 0)
    {
        printf("no answer\n");
        return 0;
    }
    int j = strlen(w) - 1;
    while (w[j] <= w[i - 1])
        j--;
    char temp = w[i - 1];
    w[i - 1] = w[j];
    w[j] = temp;
    j = strlen(w) - 1;
    while (i < j)
    {
        temp = w[i];
        w[i] = w[j];
        w[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", w);
    return 0;
}
int main()
{
    char w[100];
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", w);
        biggerIsGreater(w);
    }
    return 0;
}
