/*
** EPITECH PROJECT, 2020
** my_evil_str
** File description:
** programmers start to count from 0
*/

#include <unistd.h>

int my_string_len(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_evil_str(char *str)
{
    int i = 0;
    int j;
    char swp;

    j = my_string_len(str) - 1;
    while (i < j) {
        swp = str[i];
        str[i] = str[j];
        str[j] = swp;
        i++;
        j--;
    }
    return (str);
}
