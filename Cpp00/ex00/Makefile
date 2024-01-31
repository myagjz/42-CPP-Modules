# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 13:17:33 by myagiz            #+#    #+#              #
#    Updated: 2024/01/31 14:56:45 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRC		=	megaphone.cpp
CC		=	c++
RM		=	rm -rf
FLAG	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean : clean

re: fclean all

.PHONY: all clean fclean re