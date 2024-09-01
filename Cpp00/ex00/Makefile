# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 17:46:11 by myagiz            #+#    #+#              #
#    Updated: 2024/09/01 17:46:13 by myagiz           ###   ########.fr        #
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