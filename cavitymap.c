#include <stdio.h>
void cavityMap(int n, char grid[][100])
{
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (grid[i][j] == '9')
            {
                grid[i][j] = 'X';
            }
        }
    }
}
int main()
{
    int n;
    char grid[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", &grid[i]);
    cavityMap(n, grid);
    for (int i = 0; i < n; i++)
        printf("%s\n", grid[i]);
    return 0;
}