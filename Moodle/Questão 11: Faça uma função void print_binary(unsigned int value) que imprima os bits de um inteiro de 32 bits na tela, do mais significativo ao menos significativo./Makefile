SRC = src
OBJ = obj
BIN = bin

CC = gcc
CFLAGS = -Wall -I$(SRC)

SRCS = $(wildcard $(SRC)/*.c)
OBJS = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

all: directories $(BIN)/app

directories:
	mkdir -p $(OBJ) $(BIN) $(SRC)

$(BIN)/app: $(OBJS)
	$(CC) $(OBJS) -o $(BIN)/app

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)/*.o $(BIN)/app,

run:
	./$(BIN)/app