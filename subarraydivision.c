#include <stdio.h>
int birthday(int n, int s[], int d, int m)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int var = 0;
        for (int j = 0; j < m; j++)
            var += s[i + j];
        if (var == d)
            count++;
    }
    return count;
}
int main()
{
    int n, s[100], d, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    scanf("%d %d", &d, &m);
    int div = birthday(n, s, d, m);
    printf("\n%d", div);
    return 0;
}