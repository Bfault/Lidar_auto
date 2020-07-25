##
## EPITECH PROJECT, 2019
## AIA_n4s_2019
## File description:
## Makefile
##

NAME		=		ai

IDIR			=			include/

IDIR_MY			=			lib/include/

LDIR			=			lib/

LNAME			=			my

SRC			=		main.c \
					$(wildcard src/*.c) \
					$(wildcard src/commands/*.c) \

OBJ			=		$(SRC:.c=.o)

CC			=		gcc

CFLAGS		+=		-Wall -Wextra -g
CFLAGS		+=		-I $(IDIR) -I $(IDIR_MY)

.SILENT:
all:	$(NAME)

$(NAME):	$(OBJ)
		make -C $(LDIR)
		$(CC) -o $@ $^ -L $(LDIR) -l $(LNAME) -lm
		echo "Compilling ..."

clean:
		rm -f $(OBJ)
		echo "Cleaning ..."

fclean:	clean
		make -C $(LDIR) fclean
		rm -f $(NAME)
		echo "Binary Cleaning ..."

re:	fclean all