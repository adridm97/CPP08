# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrian <adrian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 17:48:39 by adrian            #+#    #+#              #
#    Updated: 2025/02/17 19:01:55 by adrian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= mutatedAbomination
CPP		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
HEADER	= MutantStack.hpp
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)

%.o: %.cpp Makefile $(HEADER)
	$(CPP) $(CFLAGS) -c $< -o $@
all: $(NAME)
$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: all fclean
.PHONY: re fclean clean all