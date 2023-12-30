/* #include <stdio.h>
int main()
{
    int ar[3];
    ar[0] = 10;
    ar[1] = 20;
    ar[2] = 30;
    printf("%d %d %d\n", ar[0], ar[1], ar[2]);
    return 0;
} */

/* #include <stdio.h>
int main()
{
    int ar[5];
    scanf("%d %d %d %d %d", &ar[0], &ar[1], &ar[2], &ar[3], &ar[4]);
    printf("%d %d %d %d %d", ar[0], ar[1], ar[2], ar[3], ar[4]);
    return 0;
}
 */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("arr[%d]\n", arr[i]);
    }
    return 0;
}