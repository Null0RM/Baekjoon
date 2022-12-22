#include <stdio.h>

int main(void)
{
    int result, t, k = 0;
    int arr[3] = {};
    int count[10] = {};

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    result = arr[0] * arr[1] * arr[2];
    for (int i = result; i > 0; i /= 10)
    {
        k++;
    }

    for (int i = 0; i < k; i++)
    {
        t = result % 10;
        for (int j = 0; j < 10; j++)
        {
            if (t == j)
            {
                count[j]++;
            }
        }
        result /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}