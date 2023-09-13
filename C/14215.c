// Bronze3 : Geometric
#include <stdio.h>

int max_dif(int *arr)
{
	int idx = 0;
	int max = 0;

	for (idx; idx < 3; idx++)
		max = max > arr[idx] ? max : arr[idx];
	for (idx; idx >= 0; idx--)
	{
		if (max == arr[idx])
		{
			arr[idx]--;
			break;
		}
	}
	return (arr[idx]);
}

int max_int(int *arr)
{
	int max = 0;
	for (int i = 0; i < 3; i++)
		max = max > arr[i] ? max : arr[i];
	return (max);
}

int main(void)
{
	int arr[3];

	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	do
	{
		if (max_int(arr) * 2 < arr[0] + arr[1] + arr[2])
		{
			printf("%d", arr[0] + arr[1] + arr[2]);
			return (0);
		}
	} while (max_dif(arr));
}