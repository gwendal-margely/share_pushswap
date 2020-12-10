/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** r/ProgrammerHumor
*/

#include <stdio.h>

void my_putchar(char c);

int my_getnbr(char const *str)
{
    int i = 0;
    int end_w = 0;
    long nbr = 0;
    int negatif = 1;

    while (str[i] != '\0' && end_w == 0) {
        if (str[i] == 45) {
            negatif = negatif * (-1);
        } else if (str[i] >= 48 && str[i] <= 57) {
            nbr = nbr * 10 + (str[i] - 48);
        if (str[i + 1] < 48 || str[i + 1] > 57)
            end_w = 1;
        }
            i = i + 1;
            nbr = nbr * negatif;
        if (nbr < -2147483648 || nbr > 2147483647)
            return (0);
            nbr = nbr * negatif;
        }
    return (nbr * negatif);
}
