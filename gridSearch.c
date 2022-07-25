#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int gridSearch(int r, int R, char G[][1000], char P[][1000])
{
    int yes = 0, pattern = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < R; j++)
        {
            char *p, *s1, *s2;
            s1 = G[j];
            s2 = P[i];
            p = strstr(s1, s2);
            if (p)
                yes++;
        }
        if (yes)
        {
            pattern++;
        }
    }
    if (pattern == r)
        return 1;
    else
        return 0;
}
int main()
{
    int t, r, c, R, C, val[5];
    char G[1000][1000], P[1000][1000];
    scanf("%d", &t);
    for (int a = 0; a < t; a++)
    {
        scanf("%d %d", &R, &C);
        for (int i = 0; i < R; i++)
            scanf("%s", &G[i]);
        scanf("%d %d", &r, &c);
        for (int j = 0; j < r; j++)
            scanf("%s", &P[j]);
        val[a] = gridSearch(r, R, G, P);
    }
    for (int l = 0; l < t; l++)
    {
        if (val[l])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}