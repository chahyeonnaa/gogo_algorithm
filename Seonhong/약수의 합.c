#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for (int div = 1; n >= div; div++)
    {
        if (n % div == 0)
        {
            answer += div;
        }
    }
    return answer;
}