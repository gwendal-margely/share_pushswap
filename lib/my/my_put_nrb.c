/*
** EPITECH PROJECT, 2020
** my_put_nrb
** File description:
** man man
*/

#include <unistd.h>

int my_putstring(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putstring("-2147483648");
        return (0);
    }
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + '0');
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb *(-1));
    }
    else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}
