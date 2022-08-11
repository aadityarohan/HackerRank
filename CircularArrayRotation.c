#include <stdio.h>
int main()
{
    int n, k, q, a[100000], queries[100000], temp, swap, newarr[100000], count = 0;
    scanf("%d %d %d", &n, &k, &q);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < q; i++)
        scanf("%d", &queries[i]);
    if (n - k >= 0)
    {
        for (int i = n - k; i < n; i++)
            newarr[count++] = a[i];
        for (int i = 0; i < n - k; i++)
            newarr[count++] = a[i];
    }
    else
    {
        for (int i = n - (k % n); i < n; i++)
            newarr[count++] = a[i];
        for (int i = 0; i < n - (k % n); i++)
            newarr[count++] = a[i];
    }
    for (int i = 0; i < q; i++)
        printf("%d\n", newarr[queries[i]]);
    return 0;
}