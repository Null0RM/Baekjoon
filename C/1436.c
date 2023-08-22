#include <stdio.h>

int main(void)
{
    int N, k = 666;
    int num = 0, res, tmp;
    scanf("%d", &N);

    while (1)
    {
        int count = 0;
        tmp = k;
        while (tmp != 0)
        {
            if (tmp % 10 == 6)
            {
                count++;
            }
            else
            {
                count = 0;
            }

            if (count == 3)
            {
                num++;
                break;
            }
            tmp /= 10;
        }
        if (num == N)
        {
            res = k;
            break;
        }
        k++;
    }

    printf("%d", res);

    return 0;
}