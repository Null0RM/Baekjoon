#include <stdio.h>
#include <string.h>

void reverse(int arr[])
{
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}
int main(void)
{
    int str1[10001] = {};
    int str2[10001] = {};
    int carry = 0;
    scanf("%ls %ls", str1, str2);
    int max = strlen(str1) > strlen(str2) ? strlen(str1) : strlen(str2);
    int res[max + 1];

    reverse(str1);
    reverse(str2);

    for (int i = 0; i <= max; i++)
    {
        int tempRes = str1[i] + str2[i] + carry;
        if (tempRes >= 10)
        {
            carry = 1;
            tempRes -= 10;
        }
        else
        {
            carry = 0;
        }
        res[i] = tempRes;
    }

    reverse(res);
    printf("%ls", res);
    return 0;
}