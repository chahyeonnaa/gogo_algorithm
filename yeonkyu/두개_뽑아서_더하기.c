#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define SWAP(a,b) {int c=a; a=b; b=c;}
// numbers_len�� �迭 numbers�� �����Դϴ�.
int* solution(int numbers[], size_t numbers_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    
    int i, j, a ,b= 0;
    int cnt = 0;
    int flag=0;
    int* answer = (int*)malloc(sizeof(int)*200);

    for (i = 0; i < numbers_len-1; i++) {
        a = numbers[i];
        for (j = i + 1; j < numbers_len; j++) {
            b = numbers[j];
            int tmp = a + b;
            flag = 1;
            for (int k = 0; k < cnt; k++) {
                if (answer[k] == tmp) {
                    flag = 0;
                }
            }
            if (flag == 1) {
                answer[cnt++] = tmp;
            }
        }
    }
    int bubble = 0;
    bubble = cnt;
    for (int i = 0; i < bubble; i++) {
        for (int j = 0; j < bubble - 1 - i; j++) {
            if (answer[j] > answer[j + 1]) {
                SWAP(answer[j], answer[j + 1]);
            }
        }
    }
    
    
    
    
    return answer;
}