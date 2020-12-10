/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** code on paper!
*/

#include <unistd.h>

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int len = my_strlen(dest);

    while (src[i] != '\0' && i < nb) {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}
