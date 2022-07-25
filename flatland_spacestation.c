#include <stdio.h>
#include <stdlib.h>
int flatlandSpaceStations(int n, int m, int c[])
{
    int mindist_spacest[100000], max = 0;
    for (int y = 0; y < n; y++)
    {
        int max_dist = 1000000;
        for (int x = 0; x < m; x++)
        {
            if (max_dist > abs(y - c[x]))
            {
                mindist_spacest[y] = abs(y - c[x]);
                max_dist = abs(y - c[x]);
            }
        }
    }
    for (int z = 0; z < n; z++)
    {
        if (mindist_spacest[z] > max)
            max = mindist_spacest[z];
    }
    return max;
}
int main()
{
    int n, m, c[100000];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &c[i]);
    printf("%d", flatlandSpaceStations(n, m, c));
    return 0;
}