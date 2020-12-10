/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** well, real programmers use ed
*/

#include <unistd.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(dest);

    while (src[i] != '\0') {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (dest);
}
