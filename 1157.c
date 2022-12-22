#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000000] = {};
    scanf("%s", word);
    int len = strlen(word);
    char copy[len];
    int max = 0;

    for (int i = 0; i < len; i++)
    {
        if (word[i] >= 97)
        {
            word[i] -= 32;
        }
        copy[i] = 0;
    }
    for (int i = 0; i < len; i++)
    {
        if (word[i] == 0)
        {
            continue;
        }
        for (int j = i + 1; j < len; j++)
        {
            if (word[j] == word[i])
            {
                word[j] = 0;
                copy[i]++;
            }
        }
    }
    int tmp1, tmp2;
    for (int i = 0; i < len; i++)
    {
        tmp1 = max;
        max = max >= copy[i] ? max : copy[i];
        if (tmp1 != max)
        {
            tmp2 = i;
        }
    }
    for (int i = tmp2 + 1; i < len; i++)
    {
        if (copy[i] == max)
        {
            printf("?");
            return 0;
        }
    }
    printf("%c", word[tmp2]);
    return 0;
}