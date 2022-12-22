#include <stdio.h>

int prime(int a);

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        return 0;
    }
    while (n > 1)
    {
        printf("%d\n", prime(n));
        n = n / prime(n);
    }

    return 0;
}

int prime(int a)
{
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            return i;
        }
    }
}