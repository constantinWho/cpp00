NAME = PhoneBook

CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

FILES = main.cpp Contact.cpp PhoneBook.cpp

SRC = $(FILES:=.cpp)
OBJ = $(FILES:=.0)
HEADER = Contact.hpp PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)
