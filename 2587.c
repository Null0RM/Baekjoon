#include <stdio.h>

int main(void)
{
    int num[5];
    int sum = 0, average;
    int tmp;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
        for (int j = 0; j < i; j++)
        {
            if (num[i] < num[j])
            {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    printf("%d\n", sum / 5);
    printf("%d", num[2]);

    return 0;
}