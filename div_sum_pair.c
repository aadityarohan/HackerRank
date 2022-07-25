#include <stdio.h>
int divisibleSumPairs(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if ((arr[i] + arr[j]) % k == 0)
                    count++;
            }
        }
    }
    return count;
}
int main()
{
    int arr[100], n, k, pair;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    pair = divisibleSumPairs(arr, n, k);
    printf("%d", pair / 2);
    return 0;
}