#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        sum += ar[i];
    }
    if (sum >= 0)
    {
        printf("%lld\n", sum);
    }
    else
    {
        printf("%lld\n", (-1) * sum);
    }
    return 0;
}