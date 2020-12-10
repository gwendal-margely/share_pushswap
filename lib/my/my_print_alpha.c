/*
** EPITECH PROJECT, 2020
** my_print_alpha
** File description:
** you're a bad developer
*/

#include <unistd.h>

int my_print_alpha(void)
{
    int i = 'a';
    while (i <= 'z') {
        my_putchar(i);
        i++;
    }
    return (0);
}
