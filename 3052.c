#include <stdio.h>

void input(int *array);
int compare(int *array, int t);
int count(int *array, int t);

int main(void)
{
    int n;
    int arr[10] = {};
    input(arr);
    n = compare(arr, n);
    printf("%d", 10 - n);

    return 0;
}

void input(int *array)
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        array[i] = array[i] % 42;
    }
}

int compare(int *array, int t)
{
    t = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (array[i] == array[j] && array[i] != -1)
            {
                array[j] = -1;
                t++;
            }
        }
    }
    return t;
}