// 백준 1018번 체크판 다시 칠하기
// Rank : silver 4
// 근데 좀더 어려운 것 같은데.. .

#include <stdio.h>

int main(void)
{
    int M, N;
    char board[51][51] = {};
    int tmpBoard[51][51] = {};
    int tmp_min, min = 64;
    int one_cnt, zero_cnt;
    int x, y;

    scanf("%d %d", &M, &N);
    for (int i = 0; i < M; i++)
        scanf("%s", board[i]);
    // 첫 번쨰 값을 토대로 전체 board를 체스판 형태로 만든다. 바꾼 부분에다가는 1 표시.
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (board[i][j] == board[i][j + 1])
            {
                tmpBoard[i][j + 1] = 1;
                if (board[i][j] == 'W')
                    board[i][j + 1] = 'B';
                else if (board[i][j] == 'B')
                    board[i][j + 1] = 'W';
            }
        }
        if (board[i][0] == board[i + 1][0])
        {
            tmpBoard[i + 1][0] = 1;
            if (board[i][0] == 'W')
                board[i + 1][0] = 'B';
            else if (board[i][0] == 'B')
                board[i + 1][0] = 'W';
        }
    }
    // 최솟값을 찾아보도록 합시다 ...!
    for (int i = 0; i < M - 7; i++)
    {
        for (int j = 0; j < N - 7; j++)
        {
            one_cnt = 0;
            zero_cnt = 0;
            for (x = 0; x < 8; x++)
            {
                for (y = 0; y < 8; y++)
                {
                    if (tmpBoard[i + x][j + y] == 1)
                        one_cnt++;
                    else
                        zero_cnt++;
                }
            }
            tmp_min = one_cnt > zero_cnt ? zero_cnt : one_cnt;
            min = min < tmp_min ? min : tmp_min;
        }
    }
    printf("%d", min);
}
