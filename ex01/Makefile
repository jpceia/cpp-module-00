NAME = phonebook

SRCS = $(shell find . -name *.cpp -type f)

CXX	 = clang++
RM   = rm -f

CXXFLAGS = -Wall -Werror -Wextra



all:	$(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean

re:	fclean all

.PHONY:		all clean fclean re