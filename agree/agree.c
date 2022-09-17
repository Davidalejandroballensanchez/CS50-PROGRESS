#include "cs50.h"
#include <stdio.h>

// Importante recordar que para (char) usamos ('') por ser char un tipo de dato unico caracter.
// Importante recordar que para (string) usamos ("") por ser string un tipo de dato de varios caractertes. 

int main(void)
{
    // Pregunta al usuario Si Concuerda
    char c = get_char("Do you agree? ");

    // Comprobar al usuario Si Concuerda
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not Agreed.\n");
    }
}