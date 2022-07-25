#include <stdio.h>
int *cutTheSticks(int arr[], int n, int sticks[])
{
    int min_stick, count, var;
    for (int k = 0; k < n; k++)
    {
        min_stick = 1000, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] && arr[i] < min_stick)
                min_stick = arr[i];
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j])
            {
                arr[j] -= min_stick;
                count++;
            }
        }
        sticks[k] = count;
    }
    return sticks;
}
int main()
{
    int n, arr[1000], sticks[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int *leftSticks = cutTheSticks(arr, n, sticks);
    for (int i = 0; i < n; i++)
    {
        if (leftSticks[i])
            printf("%d\n", leftSticks[i]);
    }
    return 0;
}