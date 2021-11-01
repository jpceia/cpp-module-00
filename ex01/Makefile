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

CXXFLAGS	= $(WARN_FLAGS) $(INC_FLAGS) -std=c++98 

# Object compilation
$(OBJ_DIR)/%.o:	$(SRC_DIR)/%
	@mkdir -p $(dir $@)
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $^ -o $@

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean

re:	fclean all

.PHONY:		all clean fclean re