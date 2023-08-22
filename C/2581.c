#include <stdio.h>

int prime(int a);

int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);
    int sum = 0;
    int min = 10000;
    for (int i = M; i <= N; i++)
    {
        int temp = 0;
        if (i == 1)
        {
            temp = 1;
        }
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
        {
            sum += i;
            min = min <= i ? min : i;
        }
    }
    if (sum == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, min);
    }

    return 0;
}