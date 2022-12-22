/*
#include <stdio.h>

int main(void)
{
    int N;
    int height[51];
    int weight[51];
    int grade[51];
    int h_max = 0, h_min = 200;
    int w_max = 0, w_min = 200;
    int count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &height[i], &weight[i]);
        h_max = h_max > height[i] ? h_max : height[i];
        h_min = h_min < height[i] ? h_min : height[i];
        w_max = w_max > weight[i] ? w_max : weight[i];
        w_min = w_min < weight[i] ? w_min : weight[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (height[i] == h_max && weight[i] == w_max)
        {
            count++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (height[i] == h_max && weight[i] == w_max)
        {
            grade[i] = 1;
        }
        else if (height[i] == h_min && weight[i] == w_min)
        {
            grade[i] = N;
        }
        else
        {
            grade[i] = count + 1;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", grade[i]);
    }
}
*/

#include <stdio.h>

int main(void)
{
    int N, k = 0;

    int x[50] = {};
    int y[50] = {};

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (int i = 0; i < N; i++)
    {
        k = 0;
        for (int j = 0; j < N; j++)
        {
            if (x[i] < x[j] && y[i] < y[j])
            {
                k++;
            }
        }
        printf("%d ", k + 1);
    }
    return 0;
}