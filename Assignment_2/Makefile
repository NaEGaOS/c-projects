EXECUTABLE = app
CC = gcc

CFLAGS = -pg -Wextra -std=c11 -ISDL2 -D_REENTRANT -DSDL_MAIN_HANDLED
LIBS  = -lm -lSDL2 -L.

SOURCE = a_drawline.c b_drawline.c program.c
HEADER = drawline.h face.h

include Makefile.in

.PHONY: all
all: $(EXECUTABLE)
$(EXECUTABLE): $(SOURCE) $(HEADER)
	$(info === Compiling...)
	$(shell $(PRE_BUILD))
	$(CC) $(CFLAGS) -o $@ $(SOURCE) $(LIBS)
    
.PHONY: clean
clean:
	@rm -f *.o $(EXECUTABLE) *~ libSDL2-2.0.so.0
	$(info === Cleaned)
