#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, j, n, t, k;
    scanf("%d", &t);
    while (t > 0)
    {
        t--;
        scanf("%d %d", &n, &k);
        if (k == 0)
        {
            for (i = 0; i < n; i++)
                printf("%d ", i + 1);
            printf("\n");
            continue;
        }
        if ((n % (2 * k)) != 0)
        {
            printf("-1\n");
            continue;
        }
        for (i = 0; i < (n / (2 * k)); i++)
        {
            for (j = 0; j < k; j++)
                printf("%d ", ((2 * k * i) + k + j + 1));
            for (j = 0; j < k; j++)
                printf("%d ", ((2 * k * i) + j + 1));
        }
        printf("\n");
    }
    return 0;
}