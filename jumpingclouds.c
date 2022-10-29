#include <stdio.h>
int jumpingOnClouds(int n, int c[])
{
    int jump = 0, steps = 0;
    while (jump < n)
    {
        if (c[jump + 2] == 0)
        {
            steps++;
            jump += 2;
        }
        else
        {
            jump++;
            steps++;
        }
    }
    return steps-1;
}
int main()
{
    int n, c[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &c[i]);
    printf("%d", jumpingOnClouds(n, c));
    return 0;
}