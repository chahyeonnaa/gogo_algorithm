#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int a, int b) {
	// 리턴할 값은 메모리를 동적 할당해주세요.
	const char* days[] = { "FRI","SAT","SUN","MON","TUE","WED","THU" };

	int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	int cnt = 0;

	for (int i = 0; i < a - 1; i++) // 월 날짜 합
	{
		cnt += month[i];
	}

	cnt += b - 1;

	return days[cnt % 7];

}