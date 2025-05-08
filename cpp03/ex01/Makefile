NAME = ClapTrap

SRC =	ClapTrap.cpp \
		ScavTrap.cpp \
		main.cpp  
		
OBJ = $(SRC:.cpp=.o)

MANPATH = $(addprefix , $(SRC))

FLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re 

all: $(NAME)

$(NAME): $(MANPATH)
	@c++ $(FLAGS) -o $(NAME) $(MANPATH)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all