#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int totalFarmer = m1 + m2;
        int days = m1 * d;
        int newDays = days / totalFarmer;
        int fewerDays = d - newDays;
        printf("%d\n", fewerDays);
    }
    return 0;
}