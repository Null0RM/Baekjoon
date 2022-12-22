#include <stdio.h>

int main(void)
{
    int N, sum = 0;
    scanf("%d", &N);
    if (N == 1)
    {
        printf("1");
    }
    for (int i = 1; i <= N; i++)
    {
        if (N > 1 + 6 * (sum) && N <= 1 + 6 * (sum + i))
        {
            printf("%d", i + 1);
            break;
        }
        sum += i;
    }
    return 0;
}