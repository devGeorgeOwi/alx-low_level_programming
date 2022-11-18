#!/bin/bash

# this is a script that creates a static library
# called liball.a from all the .c files present in the
# current workng directory

gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
