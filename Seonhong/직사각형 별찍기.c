#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    for (int j = 1; j <= b; j++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}