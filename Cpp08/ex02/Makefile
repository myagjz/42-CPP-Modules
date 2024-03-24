# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 17:39:30 by myagiz            #+#    #+#              #
#    Updated: 2024/03/24 17:39:31 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}

all: $(NAME)
%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
