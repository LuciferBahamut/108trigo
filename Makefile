##
## EPITECH PROJECT, 2020
## 108trigo
## File description:
## Makefile
##

NAME	=	108trigo

SRC	=	src/main.c		\
		src/help_display.c	\
		src/error_handling.c	\
		src/my_strcmp.c		\
		src/write_error.c	\
		src/fill_matrices.c	\
		src/trigo.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wextra -Wall

CPPFLAGS=	-I./include/

LDFLAGS	=	-lm

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
