exec = ds
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g -std=gnu11 -Werror -Wall -Wextra -Wpedantic -Wmissing-declarations -Wmissing-prototypes -Wold-style-definition



$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)


%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

clean:
	-rm src/*o
	-rm $(exec)