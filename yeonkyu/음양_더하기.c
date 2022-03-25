#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len�� �迭 absolutes�� �����Դϴ�.
// signs_len�� �迭 signs�� �����Դϴ�.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
   
    int i, j;
    int *n = malloc(sizeof(int) * absolutes_len);
    int answer = 0;

    for (i = 0; i < absolutes_len; i++) {
        if (signs[i]) {
            n[i] = absolutes[i];
        }
        else {
            n[i] = -absolutes[i];
        }
    }
    for (j = 0; j < absolutes_len; j++) {
        answer += n[j];
    }
    
    return answer;
}