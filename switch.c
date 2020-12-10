#include <my.h>

int *my_s(int *list)
{
    int tmp = list[0];
    
    list[0] = list[1];
    list[1] = tmp;
    my_putchar('s');
    return list;
}

int *my_p(int *list1, int *list2)
{
    list1[0] = list2[0];
    my_putchar('p');
    return list1;
}