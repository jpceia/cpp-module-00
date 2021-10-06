NAME = account

SRCS = Account.cpp tests.cpp
OBJS := $(SRCS:.cpp=.o)

CXX	 = clang++
RM   = rm -f

FLAG_WARN	=  -Wall -Wextra -Werror
FLAG_INC	= -I.

CXXFLAGS = $(FLAG_WARN) $(FLAG_INC)

all:	$(NAME)

$(NAME):$(OBJS)
	$(CXX) $^ -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:		all clean fclean re