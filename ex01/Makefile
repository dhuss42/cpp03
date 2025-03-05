CC = c++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = Serena,_my_love!

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re