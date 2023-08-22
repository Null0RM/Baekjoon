#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = '*';
            if (i % 3 == 1 && j % 3 == 1)
            {
                arr[i][j] = ' ';
            }
            for (int k = 1; k * 3 <= n; k *= 3)
            {
                if ((i / (3 * k)) % 3 == 1 && (j / (3 * k)) % 3 == 1)
                {
                    arr[i][j] = ' ';
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}