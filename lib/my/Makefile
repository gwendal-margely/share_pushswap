#
## EPITECH PROJECT, 2020
## Makefile
## File description:
## code on paper!
##

SRC	=	my_compute_factorial_it.c\
		my_compute_factorial_rec.c\
		my_compute_power_it.c\
		my_compute_power_rec.c\
		my_compute_square_root.c\
		my_evil_str.c\
		my_find_prime_sup.c\
		my_getnbr.c\
		my_is_prime.c\
		my_isneg.c\
		my_print_alpha.c\
		my_print_comb.c\
		my_print_comb2.c\
		my_print_digits.c\
		my_print_revalpha.c\
		my_put_nrb.c\
		my_putchar.c\
		my_putstr.c\
		my_revstr.c\
		my_showmem.c\
		my_showstr.c\
		my_sort_int_array.c\
		my_str_isalpha.c\
		my_str_islower.c\
		my_str_isnum.c\
		my_str_isprintable.c\
		my_str_isupper.c\
		my_strcapitalize.c\
		my_strcat.c\
		my_strcmp.c\
		my_strcpy.c\
		my_strlen.c\
		my_strlowcase.c\
		my_strncat.c\
		my_strncmp.c\
		my_strncpy.c\
		my_strstr.c\
		my_strupcase.c\
		my_swap.c\
		my_print_result.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../
	mkdir -p ../../include
	cp -r my.h ../../include

clean:
	rm -f  $(OBJ)
	rm -f build.sh
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re:	fclean all
