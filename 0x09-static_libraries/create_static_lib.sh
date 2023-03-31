#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar rc libmy.a *.o
