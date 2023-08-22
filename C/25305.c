#include <stdio.h>

int main(void)
{
    int N, k, tmp;
    scanf("%d %d", &N, &k);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        for (int j = 0; j < i; j++)
        {
            if (arr[i] <= arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("%d", arr[N - k]);

    return 0;
}