#include <stdio.h>

int main(void)
{
    int n;
    int board[100][100] = {0};
    int count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m, n;
        scanf("%d %d", &m, &n);

        for (int j = m - 1; j < m + 9; j++)
        {
            for (int k = n - 1; k < n + 9; k++)
            {
                board[j][k] = 1;
            }
        }
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (board[i][j] == 1)
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}