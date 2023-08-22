#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char OX[80] = {};
    for (int i = 0; i < n; i++)
    {
        int score = 0, temp = 1, j = 0;

        scanf("%s", OX);
        while (OX[j] != '\0')
        {
            if (OX[j] == 'O')
            {
                score += temp;
                temp++;
            }
            else if (OX[j] == 'X')
            {
                temp = 1;
            }
            j++;
        }
        printf("%d\n", score);
    }
    return 0;
}
