SRCS	= $(addprefix srcs/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

RM		= rm -f

CC		= gcc -c

CFLAGS	= -Wall -Wextra -Werror

${NAME}: 	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -I ./includes
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:	
			rm ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
