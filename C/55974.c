#include <stdio.h>

long long sum(int *a, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int Res = sum(arr, n);
    printf("%d", Res);
    return 0;
}

long long sum(int *a, int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
}