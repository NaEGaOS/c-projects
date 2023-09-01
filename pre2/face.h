#ifndef FACE_H_
#define FACE_H_

typedef struct line line_t;

struct line {
    int x1, y1;
    int x2, y2;
};

typedef struct color color_t;
struct color {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};

#define HEAD_LINES 16
#define FACE_LINES 9
#define NUM_COLORS 6

color_t colors[] = {
{
.red = 0xff,
.green = 0x00,
.blue = 0x00,
},
{
.red = 0x00,
.green = 0xff,
.blue = 0x00,
},
{
.red = 0x00,
.green = 0x00,
.blue = 0xff,
},
{
.red = 0xff,
.green = 0xff,
.blue = 0x00,
},
{
.red = 0xff,
.green = 0x00,
.blue = 0xff,
},
{
.red = 0xff,
.green = 0xff,
.blue = 0xff,
},
};

line_t head[] = {
{
.x1 = 409,
.x2 = 614,
.y1 = 665,
.y2 = 665,
},
{
.x1 = 614,
.x2 = 704,
.y1 = 665,
.y2 = 613,
},
{
.x1 = 704,
.x2 = 771,
.y1 = 613,
.y2 = 534,
},
{
.x1 = 771,
.x2 = 807,
.y1 = 534,
.y2 = 436,
},
{
.x1 = 807,
.x2 = 807,
.y1 = 436,
.y2 = 331,
},
{
.x1 = 807,
.x2 = 771,
.y1 = 331,
.y2 = 234,
},
{
.x1 = 771,
.x2 = 704,
.y1 = 234,
.y2 = 154,
},
{
.x1 = 704,
.x2 = 614,
.y1 = 154,
.y2 = 102,
},
{
.x1 = 614,
.x2 = 409,
.y1 = 102,
.y2 = 102,
},
{
.x1 = 409,
.x2 = 319,
.y1 = 102,
.y2 = 154,
},
{
.x1 = 319,
.x2 = 252,
.y1 = 154,
.y2 = 233,
},
{
.x1 = 252,
.x2 = 216,
.y1 = 233,
.y2 = 331,
},
{
.x1 = 216,
.x2 = 216,
.y1 = 331,
.y2 = 436,
},
{
.x1 = 216,
.x2 = 252,
.y1 = 436,
.y2 = 534,
},
{
.x1 = 252,
.x2 = 319,
.y1 = 534,
.y2 = 613,
},
{
.x1 = 319,
.x2 = 409,
.y1 = 613,
.y2 = 665,
},
};

line_t face[] = {
// Right eye
{
.x1 = 560,
.x2 = 560,
.y1 = 240,
.y2 = 280,
},
{
.x1 = 560,
.x2 = 580,
.y1 = 240,
.y2 = 260,
},
{
.x1 = 560,
.x2 = 580,
.y1 = 280,
.y2 = 260,
},
// Left eye
{
.x1 = 460,
.x2 = 460,
.y1 = 240,
.y2 = 280,
},
{
.x1 = 460,
.x2 = 480,
.y1 = 240,
.y2 = 260,
},
{
.x1 = 460,
.x2 = 480,
.y1 = 280,
.y2 = 260,
},
//Mouth
{
.x1 = 360,
.x2 = 460,
.y1 = 440,
.y2 = 480,
},
{
.x1 = 460,
.x2 = 560,
.y1 = 480,
.y2 = 480,
},
{
.x1 = 560,
.x2 = 680,
.y1 = 480,
.y2 = 440,
},

};
#endif
