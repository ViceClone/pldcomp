EXEC     = comp
CC       = g++

CFLAGS   = -std=gnu11 -Wall -Werror -I.
LDFLAGS  = 

SRC      = $(wildcard *.cpp)
OBJ      = $(SRC:.cpp=.o)

all: $(EXEC)

${EXEC}: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

cleaner: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)
