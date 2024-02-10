# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 11:15:47 by myagiz            #+#    #+#              #
#    Updated: 2024/02/10 13:09:06 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap
CC = c++
CCFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = main.o ClapTrap.o ScavTrap.o
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all