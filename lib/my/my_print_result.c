#include <unistd.h>

void my_print_result(int i, int x, int y, int multi)
{
    if (multi == 1) {
        my_putstr(" || ");
    }
    my_putstr("[rush-1-");
    my_putchar(i + 48);
    my_putstr("] ");
    my_putchar(x + 48);
    my_putchar(' ');
    my_putchar(y + 48);
}
