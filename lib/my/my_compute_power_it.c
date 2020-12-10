/*
** EPITECH PROJECT, 2020
** my_compute_power_it
** File description:
** segmentation fault (core dumped)
*/

#include <unistd.h>

int my_compute_power_it(int nb, int p)
{
    int i = 1;
    int tmp = nb;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    while (i < p) {
        nb = nb * tmp;
        i = i + 1;
    }
    return (nb);
}
