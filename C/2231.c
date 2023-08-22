#include <stdio.h>

int main(void)
{
    int i, N, tmp1, tmp2;
    scanf("%d", &N);

    for (i = 1; i < 1000000; i++)
    {
        if (i == 999999)
        {
            printf("0");
            return 0;
        }
        tmp1 = i;
        tmp2 = i;
        while (tmp2 != 0)
        {
            tmp1 += (tmp2 % 10);
            tmp2 /= 10;
        }
        if (tmp1 == N)
        {
            break;
        }
    }
    printf("%d", i);

    return 0;
}