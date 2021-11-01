NAME 		= megaphone

SRCS 		= megaphone.cpp

CXX	 		= clang++
RM   		= rm -f

WARN_FLAGS	= -Wall -Werror -Wextra -pedantic-errors

CXXFLAGS 	= $(WARN_FLAGS) -std=c++98 

all:	$(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean

re:	fclean all

.PHONY:		all clean fclean re