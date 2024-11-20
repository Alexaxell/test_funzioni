#include <stdio.h>
#include "myFunctions.h"

void conta(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", (i + 1));
    }
    printf("\n");
}

int doppio (int n) {
    /*
    int ris;
    ris = 2 * n;
    return ris;
     */
    return (2 * n);
}

float media (float n, float a, float b) {
    return (n + a + b) / 3;
}

void rettangolo (int base, int altezza) {
    for (int i = 0; i < base; i++) {
        for (int j = 0; j < altezza; j++) {
            printf("*");
        }
        printf("\n");
    }
}
