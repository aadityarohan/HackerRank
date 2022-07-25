#include <stdio.h>
int libraryFine(int d1, int d2, int m1, int m2, int y1, int y2)
{
    int fine = 0;
    if (d1 > d2 && m1 == m2 && y1 == y2)
    {
        fine = (d1 - d2) * 15;
        return fine;
    }
    if (m1 > m2 && y1 == y2)
    {
        fine = (m1 - m2) * 500;
        return fine;
    }
    if (y1 > y2)
    {
        fine = 10000;
        return fine;
    }
    return fine;
}
int main()
{
    int d1, d2, m1, m2, y1, y2, fine;
    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);
    fine = libraryFine(d1, d2, m1, m2, y1, y2);
    printf("%d", fine);
    return 0;
}