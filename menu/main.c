/*
 * Algoritmo menu
 * El algotimo conciste en:
 * Muestra un menu y lo que hace
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int opc = 0;
    printf_s("1) Hola mundo\n");
    printf_s("2) adios mundo\n");
    printf_s("Selecciona una opcion: ");
    scanf_s("%d", &opc);
    switch (opc)
    {
    case 1:
    {
        printf_s("Hola mundo\n");
        break;
    }
    case 2:
    {
        printf_s("Adios mundo\n");
        break;
    }
    default:
    {
        printf_s("No existe este valor\n");
        break;
    }
    }
    system("pause");
    return 0;
}
