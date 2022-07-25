#include <stdio.h>
int workbook(int arr[], int n, int k)
{
    int special_prob = 0, total_pages = 0, curr_page = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < k)
            total_pages += 1;
        else if (arr[i] >= k)
        {
            total_pages += (arr[i] / k);
            if (arr[i] % k)
                total_pages += 1;
        }
        while (curr_page <= total_pages)
        {
            int question = 1;
            while (question <= arr[i])
            {
                for (int x = 1; x <= k; x++)
                {
                    if (question <= arr[i])
                    {
                        if (question == curr_page)
                            special_prob++;
                        question++;
                    }
                }
                curr_page++;
            }
        }
    }
    return special_prob;
}
int main()
{
    int n, k, spec_prob, arr[100];
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    spec_prob = workbook(arr, n, k);
    printf("%d", spec_prob);
    return 0;
}