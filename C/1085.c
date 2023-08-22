#include <stdio.h>

int main(void)
{
    int x, y, w, h;
    int a, b, c, d;
    int min;

    scanf("%d %d %d %d", &x, &y, &w, &h);
    a = x;
    b = y;
    c = h - y;
    d = w - x;
    if (a <= b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }
    if (min > d)
    {
        min = d;
    }
    printf("%d", min);

    return 0;
}