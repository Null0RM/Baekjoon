/*#include <stdio.h>

int main(void)
{
    int arr[8];            //방향
    int length[8];         //길이
    int board, piece, res; // 큰 직사각형, 작은 직사각형, 큰-작은
    int n;                 //구역당 참외의 수

    scanf("%d", &n);

    for (int i = 0; i < 6; i++)
    {
        scanf("%d %d", &arr[i], &length[i]);
    }
    arr[6] = arr[0];
    arr[7] = arr[1];
    length[6] = length[0];
    length[7] = length[1];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == arr[i + 2] && arr[i + 1] == arr[i + 3])
        {
            board = (length[i] + length[i + 2]) * (length[i + 1] + length[i + 3]);
            piece = length[i + 1] * length[i + 2];
            res = board - piece;
        }
    }
    printf("%d", res * n);

    return 0;
}
*/

#include <stdio.h>

int main(void)
{
    int dir[6];
    int length[12];
    int N;
    int wide, narrow, hexa;
    int Res;

    scanf("%d", &N);
    for (int i = 0; i < 6; i++)
    {
        scanf("%d %d", &dir[i], &length[i]);
        length[i + 6] = length[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (length[i] + length[i + 2] == length[i + 4] && length[i + 1] + length[i + 3] == length[i + 5])
        { // i번째와 i+2번째가 같은 방향임.
            wide = length[i + 4] * length[i + 5];
            narrow = length[i + 1] * length[i + 2];
            hexa = wide - narrow;
        }
    }
    Res = hexa * N;

    printf("%d", Res);

    return 0;
}