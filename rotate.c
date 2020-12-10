#include <my.h>

int *my_r(int *list, int size)
{
    int save = list[0];
    for (int i = 0; i < (size - 1); i++) {
        list[i] = list[i + 1];
    }
    list[size - 1] = save;
    my_putstr("r");
    return list;
}

int *my_rr(int *list, int size)
{
    int save = list[size - 1];
    for (int i = 0; i < (size - 1); i++) {
        list[i + 1] = list[i];
    }
    list[0] = save;
    my_putstr("rr");
    return list;
}

int *rotate(int *list, int wanted, int current, int size)
{
    int turns = (size + (current - wanted)) % size;
    
    if (turns <= size / 2) {
        for (int i = 0; i < turns; i++) {
            list = my_r(list, size);
            my_putstr(" ");
        }
    } else {
        for (int i = 0; i < size - turns; i++) {
            list = my_rr(list, size);
            my_putstr(" ");
        }
    }
    return list;
}