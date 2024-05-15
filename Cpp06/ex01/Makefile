# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/15 15:45:46 by myagiz            #+#    #+#              #
#    Updated: 2024/05/15 15:45:46 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize
SRC = Serializer.cpp main.cpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
