# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 13:03:55 by jpceia            #+#    #+#              #
#    Updated: 2021/12/14 13:19:37 by jpceia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRCS = Account.cpp tests.cpp
OBJS := $(SRCS:.cpp=.o)

CXX	 = clang++
RM   = rm -f

FLAGS_WARN	= -Wall -Wextra -Werror
FLAGS_INC	= -I.
FLAGS_DEBUG = -g -DDEBUG

CXXFLAGS = $(FLAGS_WARN) $(FLAGS_INC) -std=c++98 

all:	$(NAME)

# Object compilation
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linking
$(NAME):$(OBJS)
	$(CXX) $^ -o $@

# Cleaning
clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re


.PHONY:		all clean fclean re debug
