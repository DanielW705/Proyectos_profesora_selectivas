/*
 * Algoritmo par non
 * El algotimo conciste en:
 * El programa vuelve un numero impar a par
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
    {
        num++;
    }
    printf_s("%d", num);
    system("pause");
    return 0;
}
