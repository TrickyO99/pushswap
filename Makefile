##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile unit tests
##

SRC= 	src/pushswap_1.c			\
		src/pushswap_2.c			\
		src/pushswap_3.c			\
		src/my_getnbr.c				\
		src/my_putstr.c				\
		src/my_strlen.c

OBJ=	$(SRC:.c=.o)

CFLAGS=	-W -Wall -Wextra -Werror

NAME=	push_swap

all: $(NAME)

$(NAME): $(OBJ)

	cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
