#include "drawline.h"

void a_draw_line(SDL_Surface *surface, int x1, int y1, int x2, int y2, unsigned int color) {
    // Implement your line drawing algorithm here

    // The algorithm shall draw all pixels from the point (x1, y1)
    // to the point (x2, y2), with the specified color

    // An example of how to draw a single pixel at the starting
    // point for the line

    //set_pixel(surface, x1, y1, color);
    //int increment_x = (delta_x >= 0) ? 1 : -1;
    //int increment_y = (delta_y >= 0) ? 1 : -1;
    //printf("%d\n%d\n\n", increment_x, delta_x);
    /*
    for (int i = x1; i < x1 + delta_x; i += increment_x){
        set_pixel(surface, i, y1, color);
    }
    */
    int delta_x = x2 - x1;
    int delta_y = y2 - y1;
    int step = (abs(delta_x) >= abs(delta_y)) ? abs(delta_x): abs(delta_y);
    delta_x = delta_x / step;
    delta_y = delta_y / step;
    int x = x1;
    int y = y1;
    int i = 0;
    while (i <= step){
        // gradually increment x, y
        set_pixel(surface, x, y, color);
        x += delta_x;
        y += delta_y;
        i++;
        printf("%d, %d, %d\n", step, x, y);
    }
    printf("\n");
}
