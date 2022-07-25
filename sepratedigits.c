#include <stdio.h>
#include <stdlib.h>
int print();
int main()
{
    int num;
    scanf("%d", &num);
    print(num);
    return 0;
}
int print(int num)
{
    if (num > 9)
        printf("%d\n", num % 10);
    else
    {
        printf("%d", num);
        return 0;
    }
    print(num / 10);
}