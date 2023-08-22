#include <stdio.h>
#include <string.h>

int number(char a);

int main(void)
{
    int time = 0;
    char input[15] = {};
    scanf("%s", input);
    int len = strlen(input);

    for (int i = 0; i < len; i++)
    {
        time += number(input[i]);
    }

    printf("%d", time);

    return 0;
}

int number(char a)
{
    switch (a)
    {
    case 'A':
    case 'B':
    case 'C':
        return 3;
    case 'D':
    case 'E':
    case 'F':
        return 4;
    case 'G':
    case 'H':
    case 'I':
        return 5;
    case 'J':
    case 'K':
    case 'L':
        return 6;
    case 'M':
    case 'N':
    case 'O':
        return 7;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
        return 8;
    case 'T':
    case 'U':
    case 'V':
        return 9;
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        return 10;
    }
}