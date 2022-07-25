#include <stdio.h>
int chocolateFeast(int n, int c, int m)
{
    int total = n / c, count, left = 1, no = total;
    if (total >= m)
    {
        while (total >= m)
        {
            count = total / m;
            left = total % m;
            no += count;
            total = count + left;
        }
        return no;
    }
    return total;
}
int main()
{
    int t, arr[100000][3], n, c, m, no_of_choc;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < t; i++)
    {
        n = arr[i][0];
        c = arr[i][1];
        m = arr[i][2];
        no_of_choc = chocolateFeast(n, c, m);
        printf("%d\n", no_of_choc);
    }
    return 0;
}