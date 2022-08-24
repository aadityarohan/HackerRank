#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr, result[100], n;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 100; i++)
    {
        result[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
                result[i]++;
        }
    }
    for (int i = 0; i < 100; i++)
        printf("%d ", result[i]);
    return 0;
}