#include <stdio.h>

int main(void)
{
    int N, M, max = 0;
    scanf("%d %d", &N, &M); //판에 깔린 카드의 장 수 입력
    int card[N];

    for (int i = 0; i < N; i++)
    { //카드 숫자 입력
        scanf("%d", &card[i]);
    }
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                int res = card[i] + card[j] + card[k];
                if (res <= M)
                {
                    max = max >= res ? max : res;
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}