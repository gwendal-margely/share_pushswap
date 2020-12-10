/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** no, real programmers use cat
*/

#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return (0);
    }
    if (p > 0) {
        nb = nb * my_compute_power_rec(nb, p - 1);
    }
    else
        return (1);
    return (nb);
}
