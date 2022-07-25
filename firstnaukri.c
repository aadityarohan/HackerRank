#include <stdio.h>
int main()
{
    int n, arr[100000], x, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    float prob = (float)count / (float)n;
    if (count == n)
    {
        printf("%0.1f", prob);
    }
    else
    {
        printf("%0.2f", prob);
    }
    return 0;
}
