# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrian <adrian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/13 15:56:51 by adrian            #+#    #+#              #
#    Updated: 2025/02/17 17:34:36 by adrian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= span
CPP		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
HEADER	= Span.hpp
SRC		= main.cpp Span.cpp
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
re: all fclean
.PHONY: re fclean clean all