#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int max=0;
    int remainder=0;
    int index=0;
    
    for(int i=0;i<sides_len-1;i++)
    {
        if(sides[i]>sides[i+1])
        {
            max=sides[i];
            index=i;
        }
        else
        {
            max=sides[i+1];
            index=i+1;
        }
    }
    
    sides[index]=0;
    
    for(int i=0;i<sides_len;i++)
    {
      remainder+=sides[i];
    }
    
    
    if(max>=remainder)
        answer=2;
    else
        answer=1;

    
    return answer;
}