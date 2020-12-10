/*
** EPITECH PROJECT, 2020
** my_print_digits
** File description:
** check your malloc!
*/

#include <unistd.h>

int my_print_digits(void)
{
    int i = '0';

    while (i <= '9') {
        my_putchar(i);
        i++;
    }
    return (0);
}
