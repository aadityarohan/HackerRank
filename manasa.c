#include <stdio.h>
int *stones(int n, int a, int b, int *last)
{
    if (a == b)
    {
        last[0] = a * (n - 1);
    }
    if (b > a)
    {
        for (int i = 0; i < n; i++)
        {
            last[i] = b * i + a * (n - i - 1);
        }
    }
    if (a > b)
    {
        for (int i = 0; i < n; i++)
        {
            last[i] = a * i + b * (n - i - 1);
        }
    }
    return last;
}
int main()
{
    int t, n, a, b, last[1000];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &n, &a, &b);
        int *last_stones = stones(n, a, b, last);
        if (a == b)
            printf("%d", last_stones[0]);
        else
        {
            for (int i = 0; i < n; i++)
                printf("%d ", last_stones[i]);
        }
        printf("\n");
    }
    return 0;
}