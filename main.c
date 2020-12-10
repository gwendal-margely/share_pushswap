#include <my.h>

struct sorter {
    int *pos;
    int *nbr;
    int *init;
    int size;
};


struct sorter my_order(struct sorter list, int current)
{
    int i;
    int best;
    for (int a = 0; a < list.size; a++) {
        if (list.init[a] > best){
            list.nbr[a] = list.init[a];
            list.pos[current] = a;
        }
    }
    for (i = list.pos[current]; (i + 1) < list.size; i++) {
        list.init[i] = list.init[list.pos[current + 1]];
    }
    list.size--;
    list.init[list.size] = '\0';
    return list;
}

int my_sorter(struct sorter list, int *l_a, int *l_b, int size)
{
    int i_a = 0;
    int i;
    for (i = 0; i < size; i++ && my_r(l_b, size)) {
        rotate(l_a, list.pos[i], i_a, size);
        my_p(l_b, l_a);
        my_putstr("b ");
    }
    for (i = 0; i < size; i++) {
        my_r(l_b, size);
        my_r(l_a, size);
        my_putstr("rr ");
        if (l_a[0] != l_b[0]) {
            my_p(l_a, l_b);
            my_putstr("a ");
        }
    }
    return 0;
}

char *my_pushswap(int *l_a, int *l_b, int size)
{
    struct sorter list;
    list.pos = list.nbr = list.init = malloc(size * sizeof(int));
    list.size = size;
    list.init = l_a;
    for (int i = 0; i < size; i++) {
        list = my_order(list, i);
    }
    my_sorter(list, l_a, l_b, size);
}

int main(int argc, char **argv)
{
    int *l_a;
    int *l_b;
    if (argc < 2) {
        return 84;
    } else if (argc == 2) {
        my_putchar('\n');
        return 0;
    }
    l_a = l_b = malloc(sizeof(int) * (argc - 1));
    for (int i = 1; i < argc; i++) {
        if (my_str_isnum(argv[i]) != 1) 
        {
            return 84;
        }
        l_a[i] = my_getnbr(argv[i]);
    }
    my_pushswap(l_a, l_b, (argc - 1));
    my_putchar('\n');
    return 0;
}