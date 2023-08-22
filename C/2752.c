#include <stdio.h>

int main(void)
{
    int arr[3];
    int temp, i, j;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            if (arr[i] >= arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}