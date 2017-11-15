# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akratavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/14 12:18:03 by akratavi          #+#    #+#              #
#    Updated: 2017/11/14 16:01:19 by akratavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fillit

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	-I./includes

SRCDIR		=	./srcs/

SRCS		=

OBJS		=	$(SRCS:$(SRCDIR)%.c=%.o)

RM			=	rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
