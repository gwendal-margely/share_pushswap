/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** M-x doctor
*/

#include <unistd.h>

void my_putchar(char c);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (i < n) {
        while ((s1 == s2[i]) && (s1[i]) && (s2[i])) {
            i++;
        }
    }
    return (s2[i] - s1[i]);
}