#include <stdio.h>

int main(void)
{
    int m, n;
    int arr[10000001] = {};
    arr[1] == 1;

    scanf("%d %d", &m, &n);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i % j == 0)
            {
                arr[i] == 1;
            }
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}