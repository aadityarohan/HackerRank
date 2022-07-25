#include <stdio.h>
int *breakingRecords(int scores[], int result[], int n)
{
    int max = scores[0], min = scores[0], min_score = 0, max_score = 0;
    for (int i = 0; i < n; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            max_score++;
        }
        else if (scores[i] < min)
        {
            min = scores[i];
            min_score++;
        }
    }
    result[0] = max_score;
    result[1] = min_score;
    return result;
}
int main()
{
    int n, scores[1000], result[2];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &scores[i]);
    int *record = breakingRecords(scores, result, n);
    printf("%d %d", record[0], record[1]);
    return 0;
}