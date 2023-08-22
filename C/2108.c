#include <stdio.h>

int main(void)
{
    int N, sum = 0, num, mid, max = 0, max_num, index;
    scanf("%d", &N);

    int count[8001];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        count[num + 4000]++;
        sum += num;
    }
    for (int i = 0; i < 8001; i++)
    {
        if (count[i] > 0) // 평균 구하기 위한 전체 합
        {
            sum += (i - 4000);
        }
        if (count[i] > max) // 최빈값
        {
            max = count[i];
            max_num = i - 4000;
        }
        // 범위를 구해보자.
    }

    printf("%d\n%d\n%d\n%d", sum / N, , max_num)
}