#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    if ((0 <= num1 && num1 <= 10000) && (0 <= num2 && num2 <= 10000))
    {
        if (num1 == num2)
            return 1;
        else
            return -1;
    }
}

int main(void)
{
    printf("%d\n", solution(2, 3));
    printf("%d", solution(1, 1));
    return 0;
}