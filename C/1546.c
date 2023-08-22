#include <stdio.h>

int MAX(int *arr, int t);
void input(int *arr, int n);
double Average(int *arr, int max, int n);

int main(void)
{
    int n, max;
    double sum;
    scanf("%d", &n);
    int score[n];
    input(score, n);
    max = MAX(score, n);
    sum = Average(score, max, n);

    printf("%lf", (double)sum / (double)n);

    return 0;
}

void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int MAX(int *arr, int n)    
{
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        max = arr[i] > max ? arr[i] : max;
    }

    return max;
}

double Average(int *arr, int max, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double temp = ((double)arr[i] / (double)max) * 100;
        sum += temp;
    }
    return sum;
}