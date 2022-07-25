#include <stdio.h>
int getTotalX(int a[], int b[], int n, int m)
{
    int max_b = 0, count_final = 0, count_a = 0, count_b = 0, store_a[1000], var_count = 0;
    for (int i = 0; i < m; i++)
    {
        if (b[i] > max_b)
            max_b = b[i];
    }
    for (int i = 1; i <= max_b; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % a[j] == 0)
                count_a++;
        }
        if (count_a == n)
        {
            store_a[var_count] = i;
            var_count++;
        }
        count_a = 0;
    }
    for (int k = 0; k < var_count; k++)
    {
        for (int l = 0; l < m; l++)
        {
            if (b[l] % store_a[k] == 0)
                count_b++;
        }
        if (count_b == m)
            count_final++;
        count_b = 0;
    }
    return count_final;
}
int main()
{
    int a[10], b[10], n, m, no_btwn_sets;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < m; j++)
        scanf("%d", &b[j]);
    no_btwn_sets = getTotalX(a, b, n, m);
    printf("%d", no_btwn_sets);
    return 0;
}