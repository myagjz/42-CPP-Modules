# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 17:55:40 by myagiz            #+#    #+#              #
#    Updated: 2024/09/01 17:55:46 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap
CC = c++
CCFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS = main.o ClapTrap.o ScavTrap.o FragTrap.o
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all