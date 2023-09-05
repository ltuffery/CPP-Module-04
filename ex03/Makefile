# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltuffery <ltuffery@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 17:52:34 by ltuffery          #+#    #+#              #
#    Updated: 2023/09/05 10:51:57 by ltuffery         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex03.out

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g

SRCS	= main.cpp \
		 AMateria.cpp \
		 MateriaSource.cpp \
		 Character.cpp \
		 Ice.cpp \
		 Cure.cpp

OBJS	= $(SRCS:%.cpp=%.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Finish"

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
