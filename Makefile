NAME = libft.a

COMMON = \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \

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