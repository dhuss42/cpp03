CC = c++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\
	FragTrap.cpp\
	DiamondTrap.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = Now_its_weird!

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re