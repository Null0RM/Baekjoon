#include <stdio.h>

int main(void)
{
    int T;
    int x1, y1, r1;
    int x2, y2, r2;

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        int len_square = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int r_square = (r1 + r2) * (r1 + r2);
        int big = r1 > r2 ? r1 : r2;
        if (len_square > big)
        {
            if (len_square == r_square)
            {
                printf("1");
            }
            else if (len_square >= r_square)
            {
                printf("0");
            }
            else
            {
                printf("2");
            }
        }
        else
        {
            if (x1 == x2 && y1 == y2 && r1 == r2)
            {
                printf("-1");
            }
        }
        printf("\n");
    }
    return 0;
}