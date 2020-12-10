/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** there's a problem: the intra is not down
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
