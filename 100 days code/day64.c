#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, k;
    int maxLength = 0;
    int currentLength;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i; s[j] != '\0'; j++)
        {
            currentLength = 0;

            for (k = i; k <= j; k++)
            {
                int p;
                int repeated = 0;

                for (p = i; p < k; p++)
                {
                    if (s[p] == s[k])
                    {
                        repeated = 1;
                        break;
                    }
                }

                if (repeated)
                    break;

                currentLength++;
            }

            if (currentLength > maxLength)
                maxLength = currentLength;
        }
    }

    printf("%d", maxLength);

    return 0;
}