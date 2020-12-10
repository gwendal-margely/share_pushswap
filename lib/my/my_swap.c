/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** https://github.com/x4m3/vim-epitech
*/

#include <unistd.h>

int my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
