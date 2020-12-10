/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** you're a bad developer
*/

#include <stdio.h>

void my_sort_int_array(int *tab, int size)
{
    int i = 1;
    int swp = 0;

    while (i < size) {
        if (i > 0 && tab[i - 1] > tab[i]) {
            swp = tab[i - 1];
            tab[i - 1] = tab[i];
            tab[i] = swp;
            i = 1;
        }
        else
            i++;
    }
}
