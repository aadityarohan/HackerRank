#include <stdio.h>
int happyLadybugs(int n, char b[])
{
    int a = 0, x = 0, flags[100];
    for (int i = 0; i < n; i++)
    {
        if (b[i] == '_')
        {
            a = 1;
            x = 1;
            for (int j = 0; j < n; j++)
            {
                int count = 0;
                {
                    for (int k = 0; k < n; k++)
                    {
                        if (j != k && b[j] == b[k])
                            count++;
                    }
                    if (count == 0 && b[j] != '_')
                        a = 0;
                }
            }
        }
    }
    if (x == 0)
    {
        a = 1;
        for (int l = 0; l < n; l++)
        {
            int var = 0;
            for (int m = 0; m < n; m++)
            {
                if (l != m && b[l] == b[m])
                    var = 1;
            }
            flags[l] = var;
        }
        for (int f = 0; f < n; f++)
        {
            if (b[f] == b[f + 1] || b[f] == b[f - 1])
                flags[f] = 2;
        }
        for (int v = 0; v < n; v++)
        {
            if (flags[v] == 0 || flags[v] == 1)
                a = 0;
        }
    }
    return a;
}
int main()
{
    int g, n, final;
    char b[1000];
    scanf("%d", &g);
    for (int i = 0; i < g; i++)
    {
        scanf("%d", &n);
        scanf("%s", &b);
        final = happyLadybugs(n, b);
        if (final)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}