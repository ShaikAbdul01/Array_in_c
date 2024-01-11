#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    // 1
    /* int count = 0; */
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    // 1
    /* for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            count++;
        }
    }
    printf("%d", count); */

    // 2
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[ar[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (count[i] != 0)
        {
            printf("%d -> %d\n", i, count[i]);
        }
    }
    return 0;
}