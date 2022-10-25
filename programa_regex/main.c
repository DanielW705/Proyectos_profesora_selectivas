/*
 * Algoritmo regex
 * El algotimo conciste en:
 * programa que revisa si un regex, es correcto
 * autor: Daniel Gonzalez Marinez
 * materia: Algoritmos computacionales
 * grupo:3NM42
 * */
#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
int main(int argc, char const *argv[])
{
    // Variable para usar regex
    regex_t reegex;
    char *entrada = "abc";
    // Funcion que compila el regex
    if (!regcomp(&reegex, "[a-zA-Z]+", REG_EXTENDED))
        printf_s("Regex compilado correctamente\n");
    else
    {
        printf_s("Regex tuvo un error\n");
        exit(1);
    }
    if (!regexec(&reegex, entrada, 0, NULL, 0))
        printf_s("Entrada valida\n");
    else
        printf_s("Entrada no valida\n");
    system("pause");
    return 0;
}
