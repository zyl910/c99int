c99int : c99int.c stdint.h inttypes.h
	gcc -Wall -o c99int c99int.c

.PHONY : clean
clean :
	rm c99int
