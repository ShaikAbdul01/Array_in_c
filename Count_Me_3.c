#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10005];
        scanf("%s", s);
        int isDigit = 0, isSmall = 0, isAlpha = 0;

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                isDigit++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                isSmall++;
            }
            else
            {
                isAlpha++;
            }
        }
        printf("%d %d %d\n", isAlpha, isSmall, isDigit);
    }

    return 0;
}