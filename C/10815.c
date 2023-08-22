#include <stdio.h>

int main(void)
{
    int n, m;
    long long int arr1[500000] = {};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr1[i]);
    }

    scanf("%d", &m);
    for (int j = 0; j < m; j++)
    {
        int value = 0;
        long long int input;
        scanf("%lld", &input);
        for (int j = 0; j < n; j++)
        {
            if (arr1[j] == input)
            {
                value = 1;
                printf("1 ");
                break;
            }
        }
        if (value == 0)
        {
            printf("0 ");
        }
    }
    return 0;
}