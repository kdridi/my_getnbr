CC = gcc
CFLAGS = -W -Wall -Wextra -Werror $(shell pkg-config --cflags criterion)

TARGET = my_getnbr

SRC = $(TARGET).c $(TARGET)_tests.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)
	./$?

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(shell pkg-config --libs criterion)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re