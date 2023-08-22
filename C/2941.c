#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100] = {};
    int count = 0;
    scanf("%s", a);
    int len = strlen(a);

    for (int i = 0; i < len; i++)
    {
        if (a[i] == 'c')
        {
            if (a[i + 1] == '=' || a[i + 1] == '-')
            {
                i++;
                count++;
            }
            else
            {
                count++;
            }
        }
        else if (a[i] == 'd')
        {
            if (a[i + 1] == 'z')
            {
                if (a[i + 2] == '=')
                {
                    i += 2;
                    count++;
                }
                else
                {
                    count++;
                }
            }
            else if (a[i + 1] == '-')
            {
                i++;
                count++;
            }
            else
            {
                count++;
            }
        }
        else if (a[i] == 'l')
        {
            if (a[i + 1] == 'j')
            {
                i++;
                count++;
            }
            else
            {
                count++;
            }
        }
        else if (a[i] == 'n')
        {
            if (a[i + 1] == 'j')
            {
                i++;
                count++;
            }
            else
            {
                count++;
            }
        }
        else if (a[i] == 's')
        {
            if (a[i + 1] == '=')
            {
                i++;
                count++;
            }
            else
            {
                count++;
            }
        }
        else if (a[i] == 'z')
        {
            if (a[i + 1] == '=')
            {
                i++;
                count++;
            }
            else
            {
                count++;
            }
        }
        else
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}

/*
참고할만한 코드
아래서부터 쌓아올리는 것 말고 쌓인 것을 차례로 빼는 구조를 확인하자.
그리고 세 번째 if문도 참고

#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];
    int i, j, sum;

    scanf("%s", arr);

    sum = strlen(arr);
    for(j = 0; j < strlen(arr); j++)
    {
        if((arr[j] == 'l' || arr[j] == 'n') && arr[j+1] == 'j')
            sum--;
        if(arr[j] == 'd' && arr[j+1] == 'z' && arr[j+2] == '=')
            sum--;
        if(arr[j] == '=' || arr[j] == '-')
            sum--;
    }
    printf("%d", sum);
}
*/