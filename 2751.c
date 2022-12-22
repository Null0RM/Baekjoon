#include <stdio.h>

void quicksort(int *arr, int start, int end);

int main(void)
{
    int N, arr[1000001];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

void quicksort(int *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int key = start;
    int i = start + 1, j = end, temp;
    while (i <= j)
    {
        while (arr[i] <= arr[key])
        {
            i++;
        }
        while (arr[j] >= arr[key] && j > start)
        {
            j--;
        }
        if (i > j)
        {
            temp = arr[j];
            arr[j] = arr[key];
            arr[key] = temp;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    quicksort(arr, start, j - 1);
    quicksort(arr, j + 1, end);
}

/*
#include <stdio.h>
#include <algorithm>

int number, data[1000000];

int main(void){
    scanf("%d", &number);
    for(int i = 0; i<number; i++){
        scanf("%d", &data[i]);
    }
    std::sort(data, data+number); //내부적으로 quicksort 함수가 쓰이지만 최악의 경우더라도 O(NlogN) 시간복잡도를 가짐
    for(int i = 0; i<number;i++){
        printf("%d\n", data[i]);
    }

    return 0;
}
*/