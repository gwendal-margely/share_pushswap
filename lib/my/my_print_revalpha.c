/*
** EPITECH PROJECT, 2020
** my_print_revalpha
** File description:
** no, real programmers use cat
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    int i = 'z';
    while (i >= 'a')
    {
        my_putchar(i);
        i--;
    }
    return (0);
}
