# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 17:57:25 by myagiz            #+#    #+#              #
#    Updated: 2024/09/01 17:57:26 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap
CC = c++
CCFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS =	main.cpp ClapTrap.cpp
OBJS = main.o ClapTrap.o
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all