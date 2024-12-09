CC = gcc
CFLAGS = -Wall -Wextra -lncurses
SOURCES = main.c sorting.c visualizer.c
TARGET = sorting_visualizer

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)
