#include <stdio.h>

int main(void)
{
    int arr[9][9];
    int row, column;
    int max = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] >= max)
            {
                max = arr[i][j];
                row = i + 1;
                column = j + 1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", row, column);

    return 0;
}