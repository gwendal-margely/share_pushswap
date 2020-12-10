/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** segmentation fault (core dumped)
*/

#include <unistd.h>

int my_compute_square_root(int nb)
{
    int mtp = 0;

    if (nb <= 0) {
        return (0);
    }
    while (mtp * mtp != nb) {
        mtp++;
        if (mtp > nb) {
            return (0);
        }
    }
    return (mtp);
}
