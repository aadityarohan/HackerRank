#include <stdio.h>
int gradingStudents(int a)
{
    int grades;
    if (a >= 38)
    {
        grades = ((a / 5) + 1) * 5;
        if ((grades - a) < 3)
            return grades;
        else
            return a;
    }
    return a;
}
int main()
{
    int n, grades[60], marks;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &grades[i]);
    for (int i = 0; i < n; i++)
    {
        marks = gradingStudents(grades[i]);
        printf("%d\n", marks);
    }
    return 0;
}