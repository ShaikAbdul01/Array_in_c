#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int lowest = INT_MAX, pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < lowest)
        {
            lowest = ar[i];
            pos = i;
        }
    }
    printf("%d %d\n", lowest, pos + 1);

    return 0;
}