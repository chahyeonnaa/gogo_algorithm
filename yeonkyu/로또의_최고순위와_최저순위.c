#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)malloc(sizeof(int)*2); // ��������� �ִ���
    int arr[7] = { 6,6,5,4,3,2,1 }; // arr[6] 6���� �������� 1��
    int zero = 0;
    int match = 0;

    for (int i = 0; i < lottos_len; i++) {
        if (lottos[i] == 0) {
            zero++;//0������ ����
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
    answer[0] = arr[match + zero]; //�ִ�
    answer[1] = arr[match]; //�ּ�
    return answer;
}