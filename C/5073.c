#include <stdio.h>

int max_int(int a, int b, int c)
{
	int max = 0;

	max = max > a ? max : a;
	max = max > b ? max : b;
	max = max > c ? max : c;
	return (max);
}

int main(void)
{
	int a, b, c;
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (!a && !b && !c)
			return 0;
		if (2 * max_int(a, b, c) >= a + b + c)
			printf("Invalid\n");
		else
		{
			if (a == b && a == c)
				printf("Equilateral\n");
			else if (a == b || a == c || b == c)
				printf("Isosceles\n");
			else
				printf("Scalene\n");
		}
	}
}