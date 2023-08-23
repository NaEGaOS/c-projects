#include "drawline.h"

void b_draw_line(SDL_Surface *surface, int x1, int y1, int x2, int y2, unsigned int color) {
    // Implement your line drawing algorithm here

    // The algorithm shall draw all pixels from the point (x1, y1)
    // to the point (x2, y2), with the specified color

    // An example of how to draw a single pixel at the starting
    // point for the line 
    set_pixel(surface, x1, y1, color);
}
