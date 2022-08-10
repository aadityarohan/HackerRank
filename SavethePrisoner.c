#include <stdio.h>
int saveThePrisoner(unsigned long int numberofprisoners, unsigned long int numberofsweets, unsigned long int startingprisoner)
{
    unsigned long int var, id;
    var = startingprisoner + numberofsweets - 1;
    if (var % numberofprisoners == 0)
    {
        id = numberofprisoners;
        return id;
    }
    else
    {
        id = var % numberofprisoners;
        return id;
    }
    return 0;
}
int main()
{
    unsigned long int t, n, m, s, prisoner_number;
    scanf("%lu", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lu %lu %lu", &n, &m, &s);
        prisoner_number = saveThePrisoner(n, m, s);
        printf("%lu\n", prisoner_number);
    }
    return 0;
}