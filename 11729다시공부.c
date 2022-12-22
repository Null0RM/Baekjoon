#include <stdio.h>

void Hanoi(int N, int first, int second, int third)
{
    if (N == 1)
    {
        printf("%d %d\n", first, third);
        return;
    }
    Hanoi(N - 1, first, third, second);
    Hanoi(1, first, second, third);
    Hanoi(N - 1, second, first, third);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int count = 1;
    for (int i = 0; i < n; i++)
    {
        count *= 2;
    }

    printf("%d\n", count - 1);
    Hanoi(n, 1, 2, 3);

    return 0;
}