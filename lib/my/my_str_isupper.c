/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** r/ProgrammerHumor
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    while (str[i]) {
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
        i++;
    }
    return (1);
}
