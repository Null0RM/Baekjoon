//고정관념에서 벗어나자!! for문을 사용하지 않고 수학적으로 풀어나갈 수 있자낭!!
#include <stdio.h>

int main(void)
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    int day = (v - b - 1) / (a - b) + 1; // -1은 나눠 떨어지는거 구분하는 용도(뭔말알?)
    printf("%d", day);

    return 0;
}