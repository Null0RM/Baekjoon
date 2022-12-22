#include <stdio.h>

int main(void)
{
    int n;
    int arr[246913] = {};
    arr[1] = 1;

    for (int i = 2; i <= 246913; i++)
    {
        for (int j = 2; i * j <= 246913; j++)
        {
            arr[i * j] = 1;
        }
    }
    scanf("%d", &n);

    while (n != 0)
    {
        int count = 0;

        for (int i = n + 1; i <= 2 * n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
        scanf("%d", &n);
    }

    return 0;
}