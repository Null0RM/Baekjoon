#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, count = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        char c[100] = {};
        scanf("%s", c);
        int len = strlen(c), temp = 0;

        for (int j = 0; j < len; j++)
        {
            for (int k = j + 2; k < len; k++)
            {
                if (c[j] == c[k] && c[j] != c[j + 1])
                {
                    temp = 1;
                }
            }
        }
        if (temp == 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}