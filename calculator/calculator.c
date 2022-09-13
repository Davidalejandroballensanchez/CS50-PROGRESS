#include "cs50.h"   // Quotes to use the direct file
#include <stdio.h>  // < >'s here to use an included library

int main(void)
{
    // Declaracion de Variables
    long x = get_long("x: ");
    long y = get_long("y: ");
    long z = x + y;

    // Suma de mis Variables
    printf("%li\n", z);
}