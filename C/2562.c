#include <stdio.h>

int main(void)
{
    int N = 9;
    int arr[9];
    int Max, count;
    count = 1;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    Max = arr[0];

    for (int i = 0; i < N; i++)
    {
        Max = arr[i] > Max ? arr[i] : Max;
    }
    for (int i = 0; i < N; i++)
    {
        if (Max == arr[i])
        {
            break;
        }
        count++;
    }

    printf("%d\n%d", Max, count);   

    return 0;
}