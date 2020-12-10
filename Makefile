SRC	=	main.c\
		switch.c\
		rotate.c\

LIB	=  	lib/my

NAME  	=  	pushswap

all:	compil

compil: 
	make -C $(LIB)
	gcc $(SRC) -o $(NAME) -I./include -L $(LIB) -lmy

clean:	
	rm -f $(OBJ)
	rm -f sources/$(OBJ)
	rm -f *.c~
	rm -f sources/*.c~
	rm -f *.gcno
	rm -f *.gcda
	make clean -C $(LIB)

fclean:	clean
	rm -f $(NAME)
	make fclean -C $(LIB)

re:	fclean all
