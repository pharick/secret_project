NAME    = rush-02

SRCS    = ft_dict.c ft_number.c ft_str.c ft_error.c

LIB		= ftlib.a

OBJS    = ft_dict.o ft_number.o ft_str.o ft_error.o

HEADER  = ft_dict.h ft_number.h ft_str.h ft_error.h

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
