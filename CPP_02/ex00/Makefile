# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 01:07:10 by gfredes-          #+#    #+#              #
#    Updated: 2024/05/28 01:09:22 by gfredes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = my_first_canonical_class

CFLAGS = -Wall -Wextra -Werror -std=c++98

CLEAN = rm -f

SRC =	main.cpp \
		Fixed.cpp \
		
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
