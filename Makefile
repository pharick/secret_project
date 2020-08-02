NAME    = rush-02

SRCS    = ft_dict.c ft_number.c ft_str.c ft_error.c ft_parse.c

LIB		= ftlib.a

OBJS    = ${SRCS:.c=.o}

HEADER  = ${SRCS:.c=.h}

HFLAGS  = -I

CC		= gcc

CFLAGS  =  -Wall -Wextra -Werror

LFLAGS	= -L.

.c.o:		${HFLAGS} ${HEADER}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${LIB} ${NAME}

${LIB}:    ${OBJS}
			ar rc ${LIB} ${OBJS}

${NAME}:	${LIB}
			${CC} main.c ${LFLAGS} ${LIB} -o ${NAME} 

clean:
			rm -f ${OBJS} ${LIB}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
