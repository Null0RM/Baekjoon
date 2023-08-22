#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int t = 0, sum = 0;
        double rate, average;

        scanf("%d", &k);
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        average = (double)sum / (double)k;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] > average)
            {
                t++;
            }
        }
        rate = (double)t / (double)k;
        printf("%.3lf%%\n", rate * 100);
    }

    return 0;
}