#include "aegis.h"
#include <stdlib.h>

uint32_t ae_init() {
    
    line_addr = (uint32_t*)BRESENHAM_LINE_ADDR;
    line_val = malloc(sizeof(Line));
    if(line_val == NULL) {
        return AE_INIT_MEM_ERR;
    }

    circle_addr = (uint32_t*)BRESENHAM_CIRCLE_ADDR;
    circle_val = malloc(sizeof(Circle));
    if(circle_val == NULL) {
        return AE_INIT_MEM_ERR;
    }

    ellipse_addr = (uint32_t*)BRESENHAM_ELLIPSE_ADDR;
    ellipse_val = malloc(sizeof(Ellipse));
    if(ellipse_val == NULL) {
        return AE_INIT_MEM_ERR;
    }

    fill_addr = (uint32_t*)FILL_RECTANGLE_ADDR;
    fill_val = malloc(sizeof(Rectangle));
    if(fill_val == NULL) {
        return AE_INIT_MEM_ERR;
    }

    dr_font_addr = (uint32_t*)BLITTER_DRAW_FONT_ADDR;
    dr_font_val = malloc(sizeof(Font));
    if(dr_font_val == NULL){
        return AE_INIT_MEM_ERR;
    }

    blitter_addr = (uint32_t*)BLITTER_DRAW_SPRITE_ADDR;
    blitter_val = malloc(sizeof(Blitter));
    if(blitter_val == NULL ) {
        return AE_INIT_MEM_ERR;
    }



    switch_addr = (uint32_t*)GPU_SWITCH_BUFFER_ADDR;

    return 0;
}

void ae_deinit() {
    free(line_val);
    free(circle_val);
    free(ellipse_val);
    free(fill_val);
    free(dr_font_val);
    free(blitter_val);
}

uint32_t ae_draw_line(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
    line_val->x1 = x1;
    line_val->y1 = y1;
    line_val->x2 = x2;
    line_val->y2 = y2;
    line_val->col = COLOR(col.red, col.green, col.blue); 
    
    *line_addr = (uint32_t) line_val;

    return 0;
}

uint32_t ae_draw_circle(uint32_t x, uint32_t y, uint32_t r, Color col) {
    circle_val->x1 = x;
    circle_val->y1 = y;
    circle_val->r = r;
    circle_val->col = COLOR(col.red, col.green, col.blue); 

    *circle_addr = (uint32_t) circle_val;

    return 0;
}

uint32_t ae_draw_ellipse(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
 /*   ellipse_val->x1 = x1;
    ellipse_val->y1 = y1;
    ellipse_val->x2 = x2;
    ellipse_val->y2 = y2;
    line_val->col = COLOR(col.red, col.green, col.blue); 
    
    *ellipse_addr = (uint32_t) ellipse_val;
*/
    return AE_NOT_YET_IMPL_ERR;
}

uint32_t ae_fill_rect(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
    fill_val->x1 = x1;
    fill_val->y1 = y1;
    fill_val->x2 = x2;
    fill_val->y2 = y2;
    fill_val->col = COLOR(col.red, col.green, col.blue); 
    
    *fill_addr = (uint32_t) (fill_val);

    return 0;
}

uint32_t ae_draw_font(uint32_t x, uint32_t y, uint64_t letter, Color col) {
    dr_font_val->x1 = x;
    dr_font_val->y1 = y;
    dr_font_val->letter = letter;
    dr_font_val->col = COLOR(col.red, col.green, col.blue);


    *dr_font_addr = (uint32_t) dr_font_val;
    
    return 0;
}

uint32_t ae_draw_sprite(uint32_t x, uint32_t y, uint32_t* sprite, uint64_t mask) {
    blitter_val->x1 = x;
    blitter_val->y1 = y;
    blitter_val->mask = mask;  
    for(int i =0; i < 64; i++) {
        blitter_val->sprite[i] = sprite[i];
    }


    
    *blitter_addr = (uint32_t) blitter_val;
    
    return 0;
}

void ae_switch_buffer(){
    *switch_addr = 1;
}
