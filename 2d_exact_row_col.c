#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    /* int exact_row;
    scanf("%d", &exact_row);
    for (int i = 0; i < col; i++)
    {
        printf("%d ", ar[exact_row][i]);
    }
    printf("\n"); */

    int exact_col;
    scanf("%d", &exact_col);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", ar[i][exact_col]);
    }
    printf("\n");
    return 0;
}