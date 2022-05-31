#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(strlen(s) + 1);
    strcpy(answer, s);

    for (int i = 0, cnt = 0; i < strlen(answer); i++, cnt++) {
        if (cnt % 2 == 0 && islower(answer[i]))
            answer[i] -= ('a' - 'A');
        else if (cnt % 2 == 1 && isupper(answer[i]))
            answer[i] += ('a' - 'A');
        else if (answer[i] == ' ')
            cnt = -1;
    }
    return answer;
}