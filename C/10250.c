#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);
        int floor = N % H;
        int sequence = (N - 1) / H + 1;
        if (floor == 0)
        {
            floor = H;
        }
        printf("%d%02d\n", floor, sequence);
    }
    return 0;
}