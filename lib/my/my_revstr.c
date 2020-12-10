/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** C-x C-c
*/

#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int i = 0;
    int j;
    char swp;

    j = my_strlen(str) - 1;
    while (i < j) {
        swp = str[i];
        str[i] = str[j];
        str[j] = swp;
        i++;
        j--;
    }
    return (str);
}
