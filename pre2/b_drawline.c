#include "drawline.h"

void b_draw_line(SDL_Surface *surface, int x1, int y1, int x2, int y2, unsigned int color) {
    // Implement your line drawing algorithm here

    // The algorithm shall draw all pixels from the point (x1, y1)
    // to the point (x2, y2), with the specified color

    // An example of how to draw a single pixel at the starting
    // point for the line 

    //set_pixel(surface, x1, y1, color);
    
    int delta_x = x2 - x1;
    int delta_y = y2 - y1;
    int steps = (abs(delta_x) > abs(delta_y)) ? abs(delta_x) : abs(delta_y);
    float increment_x = delta_x / (float) steps;
    float increment_y = delta_y / (float) steps;
    float x = x1;
    float y = y1;
    for (int i = 0; i <= steps; i++){
        set_pixel(surface, (int)x, (int)y, color);
        x += increment_x;
        y += increment_y;
    }
}
