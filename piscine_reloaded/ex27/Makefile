# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akratavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 12:36:11 by akratavi          #+#    #+#              #
#    Updated: 2017/11/07 12:41:03 by akratavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file

CFLAGS	=	-Wall -Wextra -Werror -I./includes

SRCS	=	./srcs/main.c\
			./srcs/ft_display_file.c\
			./srcs/ft_putchar.c\
			./srcs/ft_puterrmsg.c\

OBJS	=	main.o\
			ft_display_file.o\
			ft_putchar.o\
			ft_puterrmsg.o\

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRCS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
