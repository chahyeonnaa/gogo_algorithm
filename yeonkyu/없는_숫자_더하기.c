#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) {
    int answer = -1;
    int sum = 45;
    for (int i = 0; numbers_len > i; i++) {
        sum -= numbers[i];
    }
    answer = sum;
    return answer;
}