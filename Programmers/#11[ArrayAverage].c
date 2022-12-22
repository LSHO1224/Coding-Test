#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
double solution(int numbers[], size_t numbers_len) {
    double answer = 0;
    int Mean=0;
    
    if(1<=numbers_len&&numbers_len<=100)
    {
        for(int i=0; i<numbers_len;i++)
        {
            if((1<=(sizeof(numbers[i])/4)&&(sizeof(numbers[i])/4)<=100))
            Mean+=numbers[i];
        }
    }
    answer=((double)Mean/numbers_len);
    return answer;
}