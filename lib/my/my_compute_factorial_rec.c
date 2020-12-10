/*
** EPITECH PROJECT, 2020
** my_compute_factorial_rec
** File description:
** rm -rf --no-preserve-root /
*/

#include <unistd.h>

int my_compute_factorial_rec(int nb)
{
    int len = nb;
    int i;
    int result = 1;

    if (len > 12 || len < 0) {
        return (0);
    }
    if (len == 0) {
        return (1);
    }
    result = my_compute_factorial_rec(len - 1);
    result = len * result;
    return (result);
}
