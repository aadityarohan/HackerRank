#include <stdio.h>
#include <string.h>
int biggerIsGreater(char w[])
{
    int i = strlen(w) - 1;
    while (i > 0 && w[i - 1] >= w[i])       //it checks if there exists an alphabet which is smaller than it's previous
        i--;                                   // if this exists the loop is broken with pivot at i-1
    if (i <= 0)
    {
        printf("no answer\n");              // if no such as above mentioned exists then no further possibility is there
        return 0;
    }
    int j = strlen(w) - 1;                  // we check the suffix from pivot to find the largest alphabet within the suffix
    while (w[j] <= w[i - 1])                //the loop breaks when greater alphabet is found
        j--;
    char temp = w[i - 1];                   //pivot alphabet is swapped with largest aplhabet in the suffix
    w[i - 1] = w[j];
    w[j] = temp;
    j = strlen(w) - 1;
    while (i < j)                           // the suffix is sorted in ascending order from the alphabet next to pivot till end
    {
        temp = w[i];                    
        w[i] = w[j];
        w[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", w);
    return 0;
}
int main()
{
    char w[100];
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", w);
        biggerIsGreater(w);
    }
    return 0;
}