NAME = account

SRCS = Account.cpp tests.cpp
OBJS := $(SRCS:.cpp=.o)

CXX	 = clang++
RM   = rm -f

FLAGS_WARN	= -Wall -Wextra -Werror
FLAGS_INC	= -I.
FLAGS_DEBUG = -g

CXXFLAGS = $(FLAGS_WARN) $(FLAGS_INC)

all:	$(NAME)

$(NAME):$(OBJS)
	$(CXX) $^ -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)

# Rebuild
re:	fclean all

# Debug
debug:		CXXFLAGS += $(FLAGS_DEBUG)
debug:		re


.PHONY:		all clean fclean re
