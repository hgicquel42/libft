NAME = libft.a

COMMON = \
	chars/ft_isdigit.c \
	chars/ft_isalnum.c \
	chars/ft_isalpha.c \
	chars/ft_isascii.c \
	chars/ft_isprint.c \
	memory/ft_bzero.c \
	memory/ft_memcpy.c \
	memory/ft_memset.c \
	memory/ft_memmove.c \
	strings/ft_strlen.c \
	strings/ft_strlcpy.c \

OCOMMON = ${COMMON:.c=.o}

OBONUS = ${BONUS:.c=.o}

all:	${NAME}

.c.o:
	gcc -Wall -Wextra -Werror -I . -c $< -o ${<:.c=.o}

$(NAME): ${OCOMMON}
	ar rcs ${NAME} ${OCOMMON}

bonus:	${OCOMMON} ${OBONUS}
	ar rcs ${NAME} ${OCOMMON} ${OBONUS}

clean:
		rm -f ${OCOMMON} ${OBONUS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all