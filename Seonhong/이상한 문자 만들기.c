#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* s) {
    char* answer = (char*)malloc(1 * strlen(s) + 1);

    strcpy(answer, s);

    bool isodd = true; 

    for (int i = 0; i < strlen(s); i++)
    {
        if (answer[i] == ' ') { 
            isodd = true;
            continue; 
        }
        if (isodd) 
            answer[i] = toupper(answer[i]);
        else
            answer[i] = tolower(answer[i]);

        isodd = !isodd;
    }


    return answer;
}