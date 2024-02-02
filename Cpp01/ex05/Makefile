# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 18:07:01 by myagiz            #+#    #+#              #
#    Updated: 2024/01/31 18:07:35 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl
CC = c++ -fsanitize=address
RM = rm -rf
CCFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
