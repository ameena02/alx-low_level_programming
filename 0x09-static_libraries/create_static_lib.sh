#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rc libmy.a *.o
ranlib libmy.a
