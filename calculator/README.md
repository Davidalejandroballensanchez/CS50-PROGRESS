# Calculator

## Compiling and Running

Directly: `gcc -o calculator calculator.c cs50.c`
Makefile: `make calculator`

Then run `./calculator`

## Files

- cs50.c
    - Missing library created for this tutorial
    - Reference in code with `#include "cs50.h"`
    - This calls for the library directly in the same folder
- cs50.h
    - Public header functions that you can use
    - For instance `get_int` should be in this file
    - This file exposes available functions that you can call
- Makefile
    - This file creates shortcuts to build your C app
    - See the above compile step and notice the make command is much shorter.