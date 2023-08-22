#include <stdio.h>

int prime(int a);

int main(void)
{
    int N, count = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int a;
        scanf("%d", &a);

        if (prime(a) == 0 && a != 1)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}

int prime(int a)
{
    int temp = 0;

    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j <= a; j++)
        {
            if (a == i * j && (i != 1 && j != 1))
            {
                temp = 1;
            }
        }
    }

    return temp;
}