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
    int flag = 1;
    /* for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i < j)
            {
                if (ar[i] == ar[j])
                {
                    flag = 1;
                    break;
                }
            }
        }
    } */

    /* or */

    /*  for (int i = 0; i < n; i++)
     {
         for (int j = i + 1; j < n; j++)
         {
             if (ar[i] == ar[j])
             {
                 flag = 1;
                 break;
             }
         }
     } */

    /* or */

    for (int i = 0; i < n / 2; i++)
    {
        if (ar[i] != ar[n - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}