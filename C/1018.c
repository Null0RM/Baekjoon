#include <stdio.h>

int main(void)
{
    int M, N;
    int B_count = 32, W_count = 32;
    int res = 0;
    scanf("%d %d", &M, &N);

    char board[50][50] = {};

    for (int i = 0; i < M; i++)
    {
        }
    if (B_count > 0)
    {
        res += B_count;
    }
    if (W_count > 0)
    {
        res += W_count;
    }

    printf("%d", res);
    // 32개의 보드로 구성.
    return 0;
}