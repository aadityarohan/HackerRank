#include <stdio.h>
int jumpingOnClouds(int n, int k, int c[])
{
    int i = 0, e = 100;
    while ((i + k) % n)
    {
        if (c[(i + k) % n] == 0)
        {
            e--;
            i = (i + k) % n;
        }
        else
        {
            e = e - 3;
            i = (i + k) % n;
        }
    }
    if (c[(i + k) % n] == 1)
        return e - 3;
    else
        return e - 1;
}
int main()
{
    int n, k, c[100];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &c[i]);
    printf("%d", jumpingOnClouds(n, k, c));
    return 0;
}