#include <stdio.h>
int serviceLane(int i, int j, int width[])
{
    int min = width[i];
    for (i; i <= j; i++)
    {
        if (width[i] < min)
            min = width[i];
    }
    return min;
}
int main()
{
    int n, t, i, j, width[100000], cases[1000][2], max_vehicle;
    scanf("%d %d", &n, &t);
    for (int a = 0; a < n; a++)
        scanf("%d", &width[a]);
    for (int b = 0; b < t; b++)
        scanf("%d %d", &cases[b][0], &cases[b][1]);
    for (int k = 0; k < t; k++)
    {
        i = cases[k][0];
        j = cases[k][1];
        max_vehicle = serviceLane(i, j, width);
        printf("%d\n", max_vehicle);
    }
    return 0;
}