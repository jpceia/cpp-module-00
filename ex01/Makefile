# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 13:03:41 by jpceia            #+#    #+#              #
#    Updated: 2021/12/14 13:14:43 by jpceia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= phonebook

SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= headers

SRCS 		= $(shell find $(SRC_DIR) -name "*.cpp" -type f)
OBJS		= $(SRCS:$(SRC_DIR)/%=$(OBJ_DIR)/%.o)

CXX	 		= clang++
RM   		= rm -f

FLAGS_WARN	= -Wall -Werror -Wextra -pedantic-errors
FLAGS_INC	= -I$(INC_DIR)
FLAGS_DEBUG	= -g -fsanitize=address

CXXFLAGS	= $(FLAGS_WARN) $(FLAGS_INC) -std=c++98 

# Object compilation
$(OBJ_DIR)/%.o:	$(SRC_DIR)/%
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linking
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

# Cleaning
clean:
	$(RM) -rf $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re


.PHONY:		all clean fclean re debug
