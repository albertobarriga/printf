SRCS =	
		
OBJ =  ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = 	rm -f

NAME = ftprintf.a

HEAD = ftprintf.h

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
	${RM} ${NAME} $
	$(RM} libft.a $
	${RM} a.out

re:	fclean all

.PHONY: all, clean, cleanlib, fclean, re
