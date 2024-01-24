#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int priSum = 0, secSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("%d ",ar[i][j]);
            if (i == j)
            {
                priSum += ar[i][j];
            }
            if (i + j == n - 1)
            {
                secSum += ar[i][j];
            }
        }
        // printf("\n");
    }
    int total = priSum - secSum;
    printf("%d\n", abs(total));
    return 0;
}