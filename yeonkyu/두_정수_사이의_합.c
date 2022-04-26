#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;


    if (a > b) {
        while (a >= b) {
            answer += b;
            b++;
        }
    }
    else if (a == b) {
        answer = a;
    }
    else {
        while (b >= a) {
            answer += a;
            a++;
        }
    }

    return answer;
} 
