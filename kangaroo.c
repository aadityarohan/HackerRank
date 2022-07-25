#include <stdio.h>
int kangaroo(int x1, int v1, int x2, int v2)
{
    int result = 0, kang1, kang2;
    if (x1 < x2 && v1 > v2)
    {
        for (int i = 1; i <= 10000; i++)
        {
            kang1 = x1 + (v1 * i);
            kang2 = x2 + (v2 * i);
            if ((kang1 == kang2) && ((x1 < 10000) || (x2 < 10000)))
                result = 1;
        }
    }
    else
        result = 0;
    return result;
}
int main()
{
    int x1, x2, v1, v2, result;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    result = kangaroo(x1, v1, x2, v2);
    if (result)
        printf("YES");
    else
        printf("NO");
    return 0;
}