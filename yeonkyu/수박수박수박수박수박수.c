#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* answer = (char*)malloc(sizeof(char)*n*3);

    strcpy(answer, "");

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            strcat(answer, "��");
        }
        else
            strcat(answer, "��");
    }

    return answer;
}