#include <stdio.h>

int main(void)
{
	int max_x = -10000, min_x = 10000;
	int max_y = -10000, min_y = 10000;
	int tmp_x, tmp_y;
	int N;

	scanf("%d", &N);
	while (N--)
	{
		scanf("%d %d", &tmp_x, &tmp_y);
		max_x = max_x > tmp_x ? max_x : tmp_x;
		min_x = min_x < tmp_x ? min_x : tmp_x;
		max_y = max_y > tmp_y ? max_y : tmp_y;
		min_y = min_y < tmp_y ? min_y : tmp_y;
	}
	printf("%d", (max_x - min_x) * (max_y - min_y));
}