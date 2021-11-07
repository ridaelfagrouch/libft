
# compiler and target program
CC = gcc
NAME = libft.a
#prerequisites path
DEPDIR := ./

# all source, object, and dependency files
SRCS := $(shell find . -type f -name "ft_*.c" -exec basename {} \;)
OBJS := $(SRCS:%.c=%.o)

# target for linking compiled .o files into one program
$(NAME) : $(OBJS)
	ar rcs $(NAME) $^

#root target calling other targets
all: $(NAME)

# target to compile all .c files,
%.o : %.c $(SRCS)
	$(CC) -c $<

# delete OBJ files
clean:
	rm -r $(OBJS)

#the fclean will delete the program but after clean removes OBJ files
fclean: clean
	rm -f $(NAME)
#re: will do fclean and re-make your program
re: fclean all
#to tell make all: is not a file
.PHONY: all clean fclean re
