#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int S=0;//서비스로 받은 음료수의 개수
        S=(n/10);
    
    answer=(n*12000)+((k-S)*2000);
    return answer;
}