#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char s[100], s1[100], s2[100][100];
    int count = 0, rows, columns;
    scanf("%[^\n]s", &s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s1[count] = s[i];
            count++;
        }
    }
    s1[count] = '\0';
    float length = sqrt(strlen(s1));
    rows = floor(length);
    columns = ceil(length);
    if (rows * columns < strlen(s1))
        rows++;
    count = 0;
    for (int j = 0; j < rows; j++)
    {
        for (int k = 0; k < columns; k++)
        {
            s2[j][k] = s1[count];
            count++;
        }
    }
    count = 0;
    for (int l = 0; l < columns; l++)
    {
        for (int m = 0; m < rows; m++)
        {
            if (s2[m][l] >= 97 && s2[m][l] <= 122)
            {
                s1[count] = s2[m][l];
                count++;
            }
        }
        s1[count] = ' ';
        count++;
    }
    for (int i = 0; i < count; i++)
        printf("%c", s1[i]);
    return 0;
}
