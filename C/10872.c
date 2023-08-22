#include <stdio.h>
//팩토리얼 재귀함수로 표현하기
int facto(int N);
int temp = 1;

int main(void)
{
    int N, res;
    scanf("%d", &N);
    res = facto(N);
    printf("%d", res);

    return 0;
}

int facto(int N)
{
    if (N > 1)
    {
        return N * facto(N - 1);
    }
    else
        return 1;
}