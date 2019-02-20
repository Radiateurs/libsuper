#====================
#
# LIBSUPER by Radiateurs.
# Makefile that compile the libsuper
#
#====================

CC	=	gcc

AR	=	ar rc

RM	=	rm -rf

SRC	=	src/str_alloc.c	\
		src/str_info.c

NAME	=	libsuper.a

OBJ	=	$(SRC:.c=.o)

INCLUDE	=	-I./include

CFLAGS	=	-W -Wall -Werror -Wextra $(INCLUDE)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(AR) $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		$(NAME) clean fclean re
