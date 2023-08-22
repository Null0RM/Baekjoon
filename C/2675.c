#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        char str[20] = {};
        scanf("%d", &a);
        scanf("%s", str);

        for (int j = 0; str[j] != 0; j++)
        {
            for (int k = 0; k < a; k++)
            {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}