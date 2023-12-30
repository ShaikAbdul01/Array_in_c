#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x;
    scanf("%d", &x);
    int isFound = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            isFound = i;
            break;
        }
        else
        {
            isFound = -1;
        }
    }
    if (isFound >= 0)
    {
        printf("%d\n", isFound);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}