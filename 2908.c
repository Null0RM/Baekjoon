#include <stdio.h>

int reverse(int num);

int main(void)
{
    int a, b, max;
    scanf("%d %d", &a, &b);

    a = reverse(a);
    b = reverse(b);

    max = a > b ? a : b;
    printf("%d", max);

    return 0;
}

int reverse(int num)
{
    int a, b, c;
    c = num % 10;
    b = num / 10 % 10;
    a = num / 100;

    return 100 * c + 10 * b + a;
}