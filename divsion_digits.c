#include <stdio.h>
int findDigits(int n)
{
    int a[100], i = 0, count = 0, u = n;
    while (u)
    {
        a[i] = u % 10;
        i++;
        u /= 10;
    }
    for (u; u < i; u++)
    {
        if (a[u] && n % a[u] == 0)
            count++;
    }
    return count;
}
int main()
{
    int n[100], t, count, i = 0;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
        scanf("%d", &n[j]);
    while (i < t)
    {
        count = findDigits(n[i]);
        printf("%d\n", count);
        i++;
    }
    return 0;
}