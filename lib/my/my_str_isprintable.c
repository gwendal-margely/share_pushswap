/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** fireplace 4k
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    while (str[i]) {
        if (str[i] < 32 || str[i] == 127)
            return (1);
        i++;
    }
    return (0);
}
