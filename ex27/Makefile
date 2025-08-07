.PHONY : all re fclean clean

TARGET    := ft_display_file
CC        := /usr/bin/clang
CFLAGS    := -Wall -Wextra -Werror
SRC_FILES := main.c

all: ft_display_file
ft_display_file: $(SRC_FILES)
	$(CC) $(CFLAGS) -o $@ $^

fclean: clean
clean:
	rm -f ft_display_file

re: fclean all
