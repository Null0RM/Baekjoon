#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);
    int arr[10000] = {};
    arr[1] = 1;

    for (int i = 2; i <= 10000; i++) //소수표시해놓기
    {
        for (int j = 2; i * j <= 10000; j++)
        {
            arr[i * j] = 1;
        }
    }

    for (int i = 0; i < T; i++) // test case
    {
        int test;
        scanf("%d", &test);

        for (int j = test / 2; j >= 2; j--)
        {
            if (!arr[j] && !arr[test - j]) //이 표현을 한번 잘 배워보자 이 표현을 통해서 코드를 얼마나 줄였니?
            {
                printf("%d %d\n", j, test - j);
                break;
            }
        }
    }
    return 0;
}