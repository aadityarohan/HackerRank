#include <stdio.h>
#include <math.h>
int birthdayCakeCandles(int candles[], int n)
{
    int count = 0, var = candles[0];
    for (int i = 0; i < n; i++)
    {
        if (candles[i] >= var)
            var = candles[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (candles[j] == var)
            count++;
    }
    return count;
}
int main()
{
    int candles[100], n, count;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &candles[i]);
    count = birthdayCakeCandles(candles, n);
    printf("%d", count);
    return 0;
}