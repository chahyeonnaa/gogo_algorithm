#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = -1;
    int sum = 45;
    for (int i = 0; numbers_len > i; i++) {
        sum -= numbers[i];
    }
    answer = sum;
    return answer;
}
