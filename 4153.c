#include <stdio.h>

int main(void)
{
    int a = 1, b = 1, c = 1;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        int aa, bb, cc;
        aa = a * a;
        bb = b * b;
        cc = c * c;

        if (cc == aa + bb || aa == bb + cc || bb == aa + cc)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}