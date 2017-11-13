# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akratavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 10:52:06 by akratavi          #+#    #+#              #
#    Updated: 2017/11/07 11:06:02 by akratavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror -I./includes -c

SRCS	=	./srcs/ft_putchar.c\
			./srcs/ft_putstr.c\
			./srcs/ft_strcmp.c\
			./srcs/ft_strlen.c\
			./srcs/ft_swap.c\

OBJS	=	ft_putchar.o\
			ft_putstr.o\
			ft_strcmp.o\
			ft_strlen.o\
			ft_swap.o\

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
