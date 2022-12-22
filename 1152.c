// 공백 포함 문자열 입력받기

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000001] = {};
    int count = 0;
    scanf("%[^\n]s", str);
    int len = strlen(str);
    if (str[0] != ' ')
    {
        count++;
    }
    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}