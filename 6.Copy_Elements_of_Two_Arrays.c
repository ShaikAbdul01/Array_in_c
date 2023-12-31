#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
    }

    int m;
    scanf("%d", &m);
    int ar2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &ar2[i]);
    }

    int ar3[n + m];
    for (int i = 0; i < n; i++)
    {
        ar3[i] = ar1[i];
        // printf("%d ", ar3[i]);
    }

    int i = n;
    for (int j = 0; j < m; j++)
    {
        ar3[i] = ar2[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ar3[i]);
    }
    return 0;
}