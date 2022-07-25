#include <stdio.h>
#include <math.h>
int squares(int a, int b)
{
    int count = floor((double)sqrt(b)) - ceil((double)sqrt(a)) + 1;
    return count;
}
int main()
{
    int n[100][2], q, count, i = 0;
    scanf("%d", &q);
    for (int k = 0; k < q; k++)
    {
        for (int l = 0; l < 2; l++)
            scanf("%d", &n[k][l]);
    }
    while (i < q)
    {
        count = squares(n[i][0], n[i][1]);
        printf("%d\n", count);
        i++;
    }
    return 0;
}