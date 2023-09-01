EXECUTABLE = app
CC = gcc

CFLAGS = -Wextra -std=c11 `sdl2-config --cflags` -D_REENTRANT -DSDL_MAIN_HANDLED
LIBS  = -lm `sdl2-config --libs`

SOURCE = main.c a_fill_triangle.c b_fill_triangle.c triangle_common.c drawline.c
HEADER = drawline.h triangle.h teapot_data.h

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
