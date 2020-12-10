/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** Compare two strings
*/

int my_strcmp(char *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; ++i);
    if (i < (my_strlen(s1) - 1)) {
        return (0);
    } else {
        return (1);
    }
}
