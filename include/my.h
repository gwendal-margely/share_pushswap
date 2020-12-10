#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//local functions

struct sorter my_order(struct sorter list, int current);

int my_sorter(struct sorter list, int *l_a, int *l_b, int size);

char *my_pushswap(int *l_a, int *l_b, int size);

int *my_s(int *list);

int *my_p(int *list1, int *list2);

int *my_r(int *list, int size);

int *my_rr(int *list, int size);

int *rotate(int *list, int wanted, int current, int size);

//library functions

int my_compute_power_rec(int rec, int power);

int my_compute_factorial_it(int nb);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

int my_getnbr(char const *str);

int my_isneg(int nb);

int my_is_prime(int nb);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(char const *str);

char *my_revstr(char *str);

int my_showmem(char const *str, int *size);

int my_showstr(char const *str);

void my_sort_int_array(int *a, int *b);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src );

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

int my_strlen(char const *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

void my_swap(int *a, int *b);