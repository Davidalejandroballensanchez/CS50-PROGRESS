#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Esta es una constante creada para no tener que escribir 2 en cada sentencia IF 
    const int MINE = 2;

    // Esta es la variable points con la funcion get_int para pedir un valor a la maquina 
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else {
        printf("You lost the same number of points as me.\n");
    };
}