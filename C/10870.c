#include <stdio.h>
// fibonaci array
int fibo(int N);

int main(void)
{
    int N;

    scanf("%d", &N);
    printf("%d", fibo(N));

    return 0;
}

int fibo(int N)
{
    if (N >= 1)
    {
        return N + fibo(N - 1);
    }
    else
    {
        return 0;
    }
}