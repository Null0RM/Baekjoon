#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int q = 0; q < t; q++)
    {
        int k, n;
        scanf("%d %d", &k, &n);
        int str[k + 1][n];
        for (int i = 0; i < n; i++)
        {
            str[0][i] = i + 1;
        }
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int sum = 0;
                for (int p = 0; p < j; p++)
                {
                    sum += str[i - 1][p];
                }
                str[i][j - 1] = sum;
            }
        }
        printf("%d\n", str[k][n - 1]);
    }
    return 0;
}