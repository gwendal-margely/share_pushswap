/*
** EPITECH PROJECT, 2020
** MY_PRINTF
** File description:
** Main fuction of my_printf
*/

#define FALSE false
#define TRUE true

#include <unistd.h>
#include <stdarg.h>

typedef enum Boolean {TRUE, FALSE} bool;

void my_printf_select(int a, va_list *my_arguments, char **base)
{
    int unum;
    switch(a) {
    case 0 : my_putchar(va_arg(*my_arguments, char));
        break;
    case 1 : my_putstr(va_arg(*my_arguments, char *));
        break;
    case 4 : unum = va_arg(*my_arguments, int);
        unum *= ((unum > 0) - (unum < 0));
        my_putnr_base(unum, base[a + 2]);
        break;
    case 10 : my_putchar('%');
        break;
    default : my_putnr_base(va_arg(*my_arguments, int), base[a + 2]);
        break;
    }
}

bool my_finder(char *str, int i, va_list *my_arguments)
{
    char index[11] = "csdiubBoxX ";
    char *base[8] = {"0123456789", "0123456789", "0123456789", "01", "01", "01234567", "0123456789abcdef", "0123456789ABCDEF"};
    bool found = FALSE;
    int a;

    index[10] = '%';
    for (a = 0; index[a] < 11 && found == FALSE; a++) {
        if (str[i] == index[a]) {
            found = TRUE;
        }
    }
    if (found) {
        my_printf_select(a, &my_arguments, base);
    }
    
    return found;
}

int my_printf(char *globalstr, ...)
{
    va_list my_arguments;
    bool error = FALSE;

    va_start(my_arguments, globalstr);
    for (int i = 0; i < my_strlen(globalstr); i++) {
        if (globalstr[i-1] == '%') {
            error = my_finder(globalstr, i, &my_arguments);
        } else {
            my_putchar(globalstr[i]);
        }
        if (error == TRUE) {
            write(2, "There is an unexpected identifier\n", 34);
            return 84;
        }
    }
    return 0;
}