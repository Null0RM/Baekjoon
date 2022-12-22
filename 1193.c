#include <stdio.h>

int main(void)
{
    int i, x;
    int temp = 1;
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        if (temp <= x && temp + i > x)
        {
            x = x - temp + 1;
            break;
        }
        temp += i;
    }
    printf("%d/%d", x, i + 1 - x);

    return 0;
}