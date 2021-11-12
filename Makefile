
CFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OFILES = ${CFILES:.c=.o}
CBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c #ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
CBONUS += ${CFILES}
OBONUS = ${CBONUS:.c=.o}

CC = gcc
W = -c -Wall -Werror -Wextra
INC = libft.h
NAME = libft.a

${NAME} : ${OFILES} ${INC}
	@${CC} ${W} ${CFILES}
	@ar -rc ${NAME} ${OFILES}
clean:
	@rm -f ${OFILES} ${OBONUS}
fclean : clean
	@rm -f ${NAME}
re : fclean all
all : ${NAME}
bonus: ${OBONUS}
	@${CC} ${W} ${CBONUS}
	@ar -rc ${NAME} ${OBONUS}