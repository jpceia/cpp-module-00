# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 13:03:46 by jpceia            #+#    #+#              #
#    Updated: 2021/12/14 13:14:43 by jpceia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= megaphone

SRCS 		= megaphone.cpp

CXX	 		= clang++
RM   		= rm -f

FLAGS_WARN	= -Wall -Werror -Wextra -pedantic-errors

CXXFLAGS 	= $(FLAGS_WARN) -std=c++98 

all:	$(NAME)

# Cleaning
clean:
	$(RM) $(NAME)

fclean:	Cleaning

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re

.PHONY:		all clean fclean re debug