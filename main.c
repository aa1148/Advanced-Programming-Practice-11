// Autor: Andres Altamirano
// Matricula: A01191723
// Fecha: Octubre 14, 2016
//
// Program that tests the functions from the conversor
// static library and from the extremelyLargeString
// dymanic library

#include <stdio.h>
#include <stdlib.h>
#include "conversor.h"
#include "extremelyLargeString.h"

int main()
{
    char cArr[8];
    printf("Enter a binary number: ");
    scanf("%s", cArr);
    printf("%d\n", asciiBinaryToInt(cArr));

    printf("Enter a HEX number: ");
    scanf("%s", cArr);
    printf("%d\n", asciiHexToInt(cArr));

    printf("Enter a double: ");
    scanf("%s", cArr);
    printf("%lf\n", asciiToDouble(cArr));

    getchar();
    printf("Enter an extremely large string: ");
    extremelyLargeString();

    getchar();
    return 0;
}
