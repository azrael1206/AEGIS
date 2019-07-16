#include "aegis.h"

uint32_t init_aegis() {
    
    line_addr = malloc(sizeof(Line));
    line_val = malloc(sizeof(Line));
    circle_addr = malloc(sizeof(Circle));
    circle_val = malloc(sizeof(Circle));
    ellipse_addr = malloc(sizeof(Ellipse));
    ellipse_val = malloc(sizeof(Ellipse));
    fill_addr = malloc(sizeof(Rectangle));
    fill_val = malloc(sizeof(Rectangle));
    /*line_addr = (uint32_t*) BRESENHAM_LINE_ADDR;
    circle_addr = (uint32_t*) BRESENHAM_CIRCLE_ADDR;
    ellipse_addr = (uint32_t*) BRESENHAM_ELLIPSE_ADDR;
    fill_addr = (uint32_t*) FILL_RECTANGLE_ADDR;
    cp_font_addr = (uint32_t*) BLITTER_COPY_FONT_ADDR;
    dr_font_addr = (uint32_t*) BLITTER_DRAW_FONT_ADDR;
    blitter_addr = (uint32_t*) BLITTER_DRAW_SPRITE_ADDR;*/

    return 0;
}

uint32_t deinit_aegis() {
    free(line_addr);
    free(line_val);
    free(circle_addr);
    free(circle_val);
    free(ellipse_addr);
    free(ellipse_val);
    free(fill_addr);
    free(fill_val);
    return 0;
}

uint32_t draw_line(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
    line_val->x1 = x1;
    line_val->y1 = y1;
    line_val->x2 = x2;
    line_val->y2 = y2;
    line_val->col = COLOR(col.red, col.green, col.blue); 
    
    *line_addr = *line_val;

    return 0;
}

uint32_t draw_circle(uint32_t x, uint32_t y, uint32_t r, Color col) {
    circle_val->x1 = x;
    circle_val->y1 = y;
    circle_val->r = r;
    circle_val->col = COLOR(col.red, col.green, col.blue); 

    *circle_addr = *circle_val;

    return 0;
}

uint32_t draw_ellipse(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
    ellipse_val->x1 = x1;
    ellipse_val->y1 = y1;
    ellipse_val->x2 = x2;
    ellipse_val->y2 = y2;
    line_val->col = COLOR(col.red, col.green, col.blue); 
    
    *ellipse_addr = *ellipse_val;

    return 0;
}

uint32_t fill_rect(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
    fill_val->x1 = x1;
    fill_val->y1 = y1;
    fill_val->x2 = x2;
    fill_val->y2 = y2;
    fill_val->col = COLOR(col.red, col.green, col.blue); 
    
    *fill_addr = *fill_val;
}

uint32_t copy_font(uint32_t* font) {
    return 0;
}

uint32_t draw_font(uint32_t x, uint32_t y, char letter, Color col) {
    return 0;
}

uint32_t draw_sprite(uint32_t x, uint32_t y, uint32_t* sprite, uint32_t* mask) {
    return 0;
}