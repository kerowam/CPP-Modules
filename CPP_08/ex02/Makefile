# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 17:52:45 by gfredes-          #+#    #+#              #
#    Updated: 2024/08/10 23:40:53 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantStack

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC =	main.cpp
		
OBJT = $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJT)
	clang++ $(CFLAGS) $(OBJT) -o $(NAME)

clean:
	$(CLEAN) $(OBJT)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

.PHONY: all clean fclean re