#include <stdio.h>
#include "aegis.h"

int main(int argc, char** argv) {

    init_aegis();
    Color c;
    c.red = 32;
    c.green = 32;
    c.blue = 32;
    fill_rect(1,1,5,5,c);
    uint32_t x1 = fill_addr->x1;
    uint32_t y1 = fill_addr->y1;
    uint32_t x2 = fill_addr->x2;
    uint32_t y2 = fill_addr->y2;
    uint32_t col = fill_addr->col;
    printf("%X\n", COLOR(c.red, c.green, c.blue));
    printf("%u, %u, %u, %u, %X\n", x1, y1, x2, y2, col);

    draw_line(4,1,9,5,c);
    uint32_t x1_1 = line_addr->x1;
    uint32_t y1_1 = line_addr->y1;
    uint32_t x2_1 = line_addr->x2;
    uint32_t y2_1 = line_addr->y2;
    uint32_t col_1 = line_addr->col;
    printf("%X\n", COLOR(c.red, c.green, c.blue));
    printf("%u, %u, %u, %u, %X\n", x1_1, y1_1, x2_1, y2_1, col_1);

    deinit_aegis();


    return 0;
}