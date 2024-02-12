# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 15:44:26 by myagiz            #+#    #+#              #
#    Updated: 2024/02/11 16:30:27 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface
CC = c++
SRCS =	main.cpp \
		AMateria.cpp \
		Ice.cpp Cure.cpp \
		Character.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)
CCFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all