#include <stdio.h>
#include <stdlib.h>
int minimumDistances(int n, int a[])
{
    int min_val[10000], var = 100000;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && a[j] == a[i])
                min_val[i] = abs(i - j);
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (min_val[k] < var && min_val[k] != 0)
            var = min_val[k];
    }
    if (var == 100000)
        var = -1;
    return var;
}
int main()
{
    int n, a[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("%d", minimumDistances(n, a));
    return 0;
}