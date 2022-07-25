#include <stdio.h>
void countApplesAndOranges(int m, int n, int a, int b, int apples[], int oranges[])
{
    for (int i = 0; i < m; i++)
        apples[i] += a;
    for (int i = 0; i < n; i++)
        oranges[i] += b;
}
int main()
{
    int s, t, a, b, m, n, count_apple = 0, count_orange = 0, apples[100000], oranges[100000];
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        scanf("%d", &apples[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &oranges[i]);
    countApplesAndOranges(m, n, a, b, apples, oranges);
    for (int i = 0; i < m; i++)
    {
        if (apples[i] >= s && apples[i] <= t)
            count_apple++;
    }
    for (int i = 0; i < n; i++)
    {
        if (oranges[i] >= s && oranges[i] <= t)
            count_orange++;
    }
    printf("%d\n%d", count_apple, count_orange);
    return 0;
}