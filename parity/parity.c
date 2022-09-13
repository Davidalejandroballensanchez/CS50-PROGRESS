#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Declaracion De La Variable n
    int n = get_int("n: ");

    // (CONDICION IF - ELSE ) Si n es Par
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}