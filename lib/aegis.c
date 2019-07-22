#include "aegis.h"

uint32_t ae_init() {
    
    line_addr = malloc(sizeof(Line));
    line_val = malloc(sizeof(Line));
    if(line_val == NULL) {
        return AE_INIT_MEM_ERR;
    }

    circle_addr = malloc(sizeof(Circle));
    circle_val = malloc(sizeof(Circle));
    if(circle_val == NULL) {
        return AE_INIT_MEM_ERR;
    }

    ellipse_addr = malloc(sizeof(Ellipse));
    ellipse_val = malloc(sizeof(Ellipse));
    if(ellipse_val == NULL) {
        return AE_INIT_MEM_ERR;
    }

    fill_addr = malloc(sizeof(Rectangle));
    fill_val = malloc(sizeof(Rectangle));
    if(fill_val == NULL) {
        return AE_INIT_MEM_ERR;
    }

    cp_font_addr = malloc(sizeof(uint32_t));
    cp_font_val = malloc(sizeof(uint32_t));
    if(cp_font_val == NULL){
        return AE_INIT_MEM_ERR;
    }

    dr_font_addr = malloc(sizeof(uint32_t));
    dr_font_val = malloc(sizeof(uint32_t));
    if(dr_font_val == NULL){
        return AE_INIT_MEM_ERR;
    }

    blitter_addr = malloc(sizeof(uint32_t));
    blitter_val = malloc(sizeof(uint32_t));
    if(blitter_val == NULL ) {
        return AE_INIT_MEM_ERR;
    }

    return 0;
}

void ae_deinit() {
    free(line_addr);
    free(line_val);
    free(circle_addr);
    free(circle_val);
    free(ellipse_addr);
    free(ellipse_val);
    free(fill_addr);
    free(fill_val);
    free(cp_font_addr);
    free(cp_font_val);
    free(dr_font_addr);
    free(dr_font_val);
    free(blitter_addr);
    free(blitter_val);
}

uint32_t ae_draw_line(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
    line_val->x1 = x1;
    line_val->y1 = y1;
    line_val->x2 = x2;
    line_val->y2 = y2;
    line_val->col = COLOR(col.red, col.green, col.blue); 
    
    *line_addr = *line_val;

    return 0;
}

uint32_t ae_draw_circle(uint32_t x, uint32_t y, uint32_t r, Color col) {
    circle_val->x1 = x;
    circle_val->y1 = y;
    circle_val->r = r;
    circle_val->col = COLOR(col.red, col.green, col.blue); 

    *circle_addr = *circle_val;

    return 0;
}

uint32_t ae_draw_ellipse(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
    ellipse_val->x1 = x1;
    ellipse_val->y1 = y1;
    ellipse_val->x2 = x2;
    ellipse_val->y2 = y2;
    line_val->col = COLOR(col.red, col.green, col.blue); 
    
    *ellipse_addr = *ellipse_val;

    return 0;
}

uint32_t ae_fill_rect(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col) {
    fill_val->x1 = x1;
    fill_val->y1 = y1;
    fill_val->x2 = x2;
    fill_val->y2 = y2;
    fill_val->col = COLOR(col.red, col.green, col.blue); 
    
    *fill_addr = *fill_val;
}

uint32_t ae_copy_font(uint32_t* font) {
    return AE_NOT_YET_IMPL_ERR;
}

uint32_t ae_draw_font(uint32_t x, uint32_t y, char letter, Color col) {
    return AE_NOT_YET_IMPL_ERR;
}

uint32_t ae_draw_sprite(uint32_t x, uint32_t y, uint32_t* sprite, uint64_t* mask) {
    return AE_NOT_YET_IMPL_ERR;
}