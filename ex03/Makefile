# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboudwin <rboudwin@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 17:08:39 by rboudwin          #+#    #+#              #
#    Updated: 2024/10/31 17:14:32 by rboudwin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Materia
CFLAGS  := -Wextra -Wall -Werror -std=c++11 #-fsanitize=address
SRCS	:= src/main.cpp \
		   src/AMateria.cpp \
		   src/Cure.cpp \
		   src/Ice.cpp \
		   src/Character.cpp 
OBJS	:= ${SRCS:.cpp=.o}

all: $(NAME)

%.o: %.cpp
	@c++ $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@c++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: clean fclean all

.PHONY: all, clean, fclean, re