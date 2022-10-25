/*
 * Algoritmo par_impar
 * El algotimo conciste en:
 * determinar si un numero es par o impar
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    printf_s("Dame un numero: ");
    scanf_s("%d", &num);
    if (num & 1 == 1)
        printf_s("El numero es impar\n");
    else
        printf_s("El numero es par\n");
    system("pause");
    return 0;
}
