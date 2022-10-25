/*
 * Algoritmo multiplo 3 y 2
 * El algotimo conciste en:
 * determinar si un numero es divisible entre 3 y 2
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    printf_s("Deme un numero: ");
    scanf_s("%d", &num);
    if (num % 3 == 0 && num % 2 == 0)
        printf_s("Es multiplo de 2 y 3\n");
    else if (num % 3 == 0)
        printf_s("Es multiplo de 3\n");
    else if (num % 2 == 0)
        printf_s("Es multiplo de 2\n");
    else
        printf_s("No es multiplo ni de 3 ni de 2\n");
    system("pause");
    return 0;
}
