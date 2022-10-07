SRCS = ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putnbr_uns.c ft_putstr.c ft_strlen.c\
		
OBJ =  ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = 	rm -f

NAME = libftprintf.a

HEAD = ft_printf.h

%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@make -C libft
	@ar crs ${NAME} ${OBJ}
	
all: $(NAME)

clean:
	$(RM) ${OBJ}
	@make clean -C libft

cleanlib:
	@(make fclean -C libft)

fclean:	clean
	${RM} ${NAME}
	${RM} libft.a
	${RM} a.out

re:	fclean all

.PHONY: all, clean, cleanlib, fclean, re
