#include <stdio.h>
#include "myFunctions.h"

int main(void) {
    int valFinale;
    printf("Hello, World!\n");

    conta(10);
    valFinale = 20;
    conta(valFinale);


    printf("%d\n", doppio(15));
    conta(doppio(20));

    printf("%.1f\n", media(7.5f, 8, 9.5f));

    rettangolo(5, 10);

    return 0;
}
