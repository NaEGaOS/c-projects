#include "drawline.h"

void a_draw_line(SDL_Surface *surface, int x1, int y1, int x2, int y2, unsigned int color) {
    // Implement your line drawing algorithm here

    // The algorithm shall draw all pixels from the point (x1, y1)
    // to the point (x2, y2), with the specified color

    // An example of how to draw a single pixel at the starting
    // point for the line

    //set_pixel(surface, x1, y1, color);
    int delta_x = x2 - x1;
    int delta_y = y2 - y1;
    int step_x = (delta_x >= 0) ? 1 : -1;  // is it even  constant?
    int step_y = (delta_y >= 0) ? 1 : -1;  // is it even  constant?
    printf("%d\n%d\n\n", step_x, delta_x);
    for (int i = x1; i < x1 + delta_x; i += step_x){
        set_pixel(surface, i, y1, color);
    }
    
}
