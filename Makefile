# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dibrayev <dibrayev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/15 17:20:10 by dibrayev          #+#    #+#              #
#    Updated: 2026/09/15 17:20:51 by dibrayev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
 
SRCS = 

OBJS = ${SRCS:.c=.o}
 
all: $(NAME)
 
${NAME}: ${OBJS}
	@ar rcs ${NAME} ${OBJS}
	@echo "libft.a created"

.c.o:
	@${CC} ${CFLAGS} -c $< -o $@
 
clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}
 
re: fclean all
 
.PHONY: all clean fclean re
