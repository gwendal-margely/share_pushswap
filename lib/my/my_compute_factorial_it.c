/*
** EPITECH PROJECT, 2020
** my_compute_factorial_it
** File description:
** :wq
*/

#include <unistd.h>

int my_compute_factorial_it(int nb)
{
    int len = nb;
    int i = 0;
    int result = 1;

    if (len > 12 || len < 0) {
        return (0);
    }
    while (i < len) {
        i++;
        result = result * i;
    }
    return (result);
}
