NAME = intern

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp \
		srcs/Bureaucrat.cpp \
		srcs/AForm.cpp \
		srcs/PresidentialPardonForm.cpp \
		srcs/RobotomyRequestForm.cpp \
		srcs/ShrubberyCreationForm.cpp \
		srcs/Intern.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re