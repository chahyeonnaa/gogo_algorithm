#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*2); // 최저등수와 최대등수
    int arr[7] = { 6,6,5,4,3,2,1 }; // arr[6] 6개를 맞췄을때 1등
    int zero = 0;
    int match = 0;

    for (int i = 0; i < lottos_len; i++) {
        if (lottos[i] == 0) {
            zero++;//0나오면 증가
        }
        else {
            for (int j = 0; j < win_nums_len; j++) {
                if (lottos[i] == win_nums[j]) {
                    match++;
                    break;
                }
            }
        }
    }
    answer[0] = arr[match + zero]; //최대
    answer[1] = arr[match]; //최소
    return answer;
}

