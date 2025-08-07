.PHONY : all re fclean clean

TARGET       := libft.a
CC           := clang
CFLAGS       := -Wall -Wextra -Werror -c
AR           := ar
AR_COMMAND   := src
SRCS_DIR     := srcs
SOURCE_FILES := ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SOURCES		 := $(addprefix $(SRCS_DIR)/,$(SOURCE_FILES))
OBJ_FILES    := $(SOURCES:.c=.o)
INCLUDES_DIR := includes

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(AR) $(AR_COMMAND) $(TARGET) $^
$(OBJ_FILES): $(SOURCES) 
	$(CC) -I$(INCLUDES_DIR) $(CFLAGS) -o $@ $<

re: fclean all
fclean: clean
	rm -f $(TARGET)
clean:
	rm -f $(OBJ_FILES)
