# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrian <adrian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/10 17:52:38 by adrian            #+#    #+#              #
#    Updated: 2025/02/10 18:25:47 by adrian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= easyFind
CPP		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC		= main.cpp
HEADER	= Easyfind.hpp
OBJ		= $(SRC:.cpp=.o)

%.o: %.cpp Makefile $(HEADER)
	$(CPP) $(CFLAGS) -c $< -o $@
all: $(NAME)
$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
.PHONY: re fclean clean all
