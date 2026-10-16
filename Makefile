# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/15 17:20:10 by dibrayev          #+#    #+#              #
#    Updated: 2026/10/16 22:18:32 by dibrayev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
CFLAGS 	= -Wall -Wextra -Werror
CC 		= cc
 
SRCS 	= ft_printf.c \
		  print_char.c \
		  print_numbers.c


OBJS 	= ${SRCS:.c=.o}
 
all: $(NAME)
 
${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS}

%.o: %.c ft_printf.h
	@${CC} ${CFLAGS} -c $< -o $@
 
clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}
 
re: fclean all
 
.PHONY: all clean fclean re
