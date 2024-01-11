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
    int min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > ar[max])
        {
            max = i;
        }
        if (ar[i] < ar[min])
        {
            min = i;
        }
    }

    int temp = ar[min];
    ar[min] = ar[max];
    ar[max] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}

/*  ar[4] > ar[0]=>max=4
    ar[1] > ar[4]=> X
    ar[3] > ar[4]=> X
    ar[10] > ar[4]=>max=10
    ar[8] > ar[10]=> X
*/

/*  ar[4] < ar[0]=>min=4
    ar[1] < ar[4]=> min=1
    ar[3] < ar[1]=> X
    ar[10] < ar[1]=> X
    ar[8] < ar[10]=> X
*/