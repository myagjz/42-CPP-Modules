# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/24 17:40:48 by myagiz            #+#    #+#              #
#    Updated: 2024/03/24 17:40:49 by myagiz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp RPN.cpp
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
