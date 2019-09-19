/*  FILENAME: aegis.h
 *
 *  DESCRIPTION:
 *      Public API for the AEGIS hardware graphics accelerator 
 *
 *  NOTES:
 *      CAUTION: This is all highly in development and changes in the 
 *               backend are expected to happen
 * 
 *  AUTHOR: 
 *      Brendan Christy 
 *      Ingo Braun 
 */

#ifndef __AEGIS_H__
#define __AEGIS_H__

// ------------ INCLUDES ------------

#include <stdint.h>
#include <stdlib.h>

// ------------ CONSTANTS ------------

#define BRESENHAM_LINE_ADDR          0xd2000000
#define BRESENHAM_CIRCLE_ADDR        0xd2000004
#define BRESENHAM_ELLIPSE_ADDR       0xd2000008
#define FILL_RECTANGLE_ADDR          0xd200000c
#define BLITTER_DRAW_FONT_ADDR       0xd2000014
#define BLITTER_DRAW_SPRITE_ADDR     0xd2000018
#define GPU_SWITCH_BUFFER_ADDR       0xd200001c

#define AE_NOT_YET_IMPL_ERR          99
#define AE_INIT_MEM_ERR               1

// ------------ MACROS ------------

#define COLOR(red, green, blue)\
    blue << (11 + 11) | \
    green << 11 | \
    red 

// ------------ STRUCTURES ------------

typedef struct {
    uint32_t red;
    uint32_t green;
    uint32_t blue;
} Color;

typedef struct {
  uint32_t x1;
  uint32_t y1;
  uint32_t x2;
  uint32_t y2;
  uint32_t col;
}Line;

typedef struct {
  uint32_t x1;
  uint32_t y1;
  uint32_t r;
  uint32_t col;
}Circle;

typedef struct {
  uint32_t x1;
  uint32_t y1;
  uint32_t x2;
  uint32_t y2;
  uint32_t col;
}Ellipse;

typedef struct {
  uint32_t x1;
  uint32_t y1;
  uint32_t x2;
  uint32_t y2;
  uint32_t col;
}Rectangle;


typedef struct {
  uint32_t x1;
  uint32_t y1;
  uint64_t letter;
  uint32_t col;
}Font;

typedef struct {
  uint32_t x1;
  uint32_t y1;
  uint64_t mask;
  uint32_t sprite[64];

}Blitter;

// ------------ GLOBALS ------------

volatile uint32_t* line_addr;
volatile uint32_t* circle_addr;
volatile uint32_t* ellipse_addr;
volatile uint32_t* fill_addr;
volatile uint32_t* dr_font_addr;
volatile uint32_t* blitter_addr;
volatile uint32_t* switch_addr;

Line* line_val;
Circle* circle_val;
Ellipse* ellipse_val;
Rectangle* fill_val;
Font* dr_font_val;
Blitter* blitter_val;

// ------------ FUNCTIONS ------------

/**
  * Initializing the globals for the Graphics Accelerator (Constructor)
  * 
  * @return The result if the drawing happend successfully (0) or not (> 0)
  */
uint32_t ae_init();

/**
  * Deinitializing the globals for the Graphics Accelerator (Destructor)
  */
void ae_deinit();

/**
  * Using the Bresenham Line drawing algorithm to draw a line from (x1 | y1) to (x2 | y2).
  * On success this function will return 0, on error this function will return a value greater than 0.
  * 
  * @param x1 The starting X-Coordinate
  * @param y1 The starting Y-Coordinate
  * @param x2 The ending X-Coordinate
  * @param y2 The ending Y-Coordinate
  * @param col The color that has to be drawn
  * @return The result if the drawing happend successfully (0) or not (> 0)
  */
uint32_t ae_draw_line(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col);

/**
  * Using the Bresenham Circle drawing algorithm to draw a circle at (x1 | y1) with radius r.
  * On success this function will return 0, on error this function will return a value greater than 0.
  *  
  * @param x The starting X-Coordinate
  * @param y The starting Y-Coordinate
  * @param r The radius of the circle
  * @param col The color that has to be drawn
  * @return The result if the drawing happend successfully (0) or not (> 0)
  */
uint32_t ae_draw_circle(uint32_t x, uint32_t y, uint32_t r, Color col);

/**
  * Using the extended Bresenham Circle drawing algorithm to draw an ellipse with the bounding box from (x1 | y1) to (x2 | y2).
  * On success this function will return 0, on error this function will return a value greater than 0.
  * 
  * @param x1 The starting X-Coordinate
  * @param y1 The starting Y-Coordinate
  * @param x2 The ending X-Coordinate
  * @param y2 The ending Y-Coordinate
  * @param col The color that has to be drawn
  * @return The result if the drawing happend successfully (0) or not (> 0)
  */
uint32_t ae_draw_ellipse(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col);

/**
  * Draw a filled Rectangle from (x1 | y1) to (x2 | y2).
  * On success this function will return 0, on error this function will return a value greater than 0.
  * 
  * @param x1 The starting X-Coordinate
  * @param y1 The starting Y-Coordinate
  * @param x2 The ending X-Coordinate
  * @param y2 The ending Y-Coordinate
  * @param col The color that has to be drawn
  * @return The result if the drawing happend successfully (0) or not (> 0)
  */
uint32_t ae_fill_rect(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col);

/**
  * Bit Blit a character from the loaded font to the position (x | y)
  * On success this function will return 0, on error this function will return a value greater than 0.
  * 
  * @param x The starting X-Coordinate
  * @param y The starting Y-Coordinate
  * @param character The character that should be printed
  * @param col The color that has to be drawn
  * @return The result if the drawing happend successfully (0) or not (> 0)
  */
uint32_t ae_draw_font(uint32_t x, uint32_t y, uint64_t letter, Color col);

/**
  * Bit Blit a given Sprite with an alpha mask to the position (x | y). Sprites and alpha masks are of the size 8*8. 
  * On success this function will return 0, on error this function will return a value greater than 0.
  * 
  * @param x The starting X-Coordinate
  * @param y The starting Y-Coordinate
  * @param sprite The Sprite address to be drawn
  * @param mask Alpha Mask for the sprite
  * @return The result if the drawing happend successfully (0) or not (> 0)
  * 
  */
uint32_t ae_draw_sprite(uint32_t x, uint32_t y, uint32_t* sprite, uint64_t mask);


/**
  * Swap the two buffers manually to draw the new image
  */
void ae_switch_buffer();

#endif // !__AEGIS_H
