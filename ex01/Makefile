NAME 		= phonebook

SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= headers

SRCS 		= $(shell find $(SRC_DIR) -name "*.cpp" -type f)
OBJS		= $(SRCS:$(SRC_DIR)/%=$(OBJ_DIR)/%.o)

CXX	 		= clang++
RM   		= rm -f

WARN_FLAGS	= -Wall -Werror -Wextra -pedantic-errors
INC_FLAGS	= -I$(INC_DIR)
DEBUG_FLAGS	= -g -fsanitize=address

CXXFLAGS	= $(WARN_FLAGS) $(INC_FLAGS) -std=c++98 

# Object compilation
$(OBJ_DIR)/%.o:	$(SRC_DIR)/%
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re


.PHONY:		all clean fclean re
