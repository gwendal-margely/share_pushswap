/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** try not to segfault, good luck :)
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9' && str[i] != '-') {}
            return (0);
        i++;
    }
    return (1);
}
