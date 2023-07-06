NAME	= 	myphonebook

#Flags
CC		= 	c++
CFLAGS	= 	-Wall -Wextra -Werror -std=c++98
RM		= 	rm -rf

#Colors:
GREEN	=	\e[92;5;118m
YELLOW	=	\e[93;5;226m
GRAY	=	\e[33;2;37m
RESET	=	\e[0m
CURSIVE	=	\e[33;3m

#Files
SRC		=	Contact.cpp PhoneBook.cpp main.cpp
HEADER  =	Contact.hpp PhoneBook.hpp
OBJ		= 	$(SRC:.cpp=.o)

#Rules
all		: 	$(NAME)

%.o		:	%.cpp $(HEADER)
			printf "$(CURSIVE)$(GRAY) 	- Compiling $@... $(RESET)\n"
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	: 	$(OBJ)
			printf "$(CURSIVE)$(GRAY) 	- Linking $(NAME)... $(RESET)\n"
			$(CC) $(CFLAGS) $^ -o $(NAME)
			printf "$(GREEN)    - Executable created.\n$(RESET)"

clean	:
			$(RM) $(OBJ)
			printf "$(YELLOW)    - Objects removed.$(RESET)\n"

fclean	:	clean
			$(RM) $(NAME)
			printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re		: 	clean all

.PHONY	: 	all clean re fclean

.SILENT	: 	clean fclean all $(NAME) $(OBJ)