CC = c++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	ClapTrap.cpp\
	ScavTrap.cpp\
	FragTrap.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = Repetitive_work

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re