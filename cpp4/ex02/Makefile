# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzaengel <lzaengel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 13:57:31 by lzaengel          #+#    #+#              #
#    Updated: 2024/10/13 12:52:06 by lzaengel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror -g3 -std=c++98 -pedantic

NAME = Animal

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re