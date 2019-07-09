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
 * 
 */

#ifndef __AEGIS_H__
#define __AEGIS_H__

// ------------ INCLUDES ------------

#include <stdint.h>

// ------------ CONSTANTS ------------

#define BRESENHAM_LINE_ADDR          0xd0000000
#define BRESENHAM_CIRCLE_ADDR        0xd0000004
#define BRESENHAM_ELLIPSE_ADDR       0xd0000008
#define FILL_RECTANGLE_ADDR          0xd0000012
#define BLITTER_COPY_FONT            0xd0000016
#define BLITTER_DRAW_FONT_ADDR       0xd0000020
#define BLITTER_DRAW_SPRITE_ADDR     0xd0000024

// ------------ MACROS ------------

#define COLOR(red, green, blue) {\
    red << (10 + 11) | \
    green << 10 | \
    blue \
}


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
    uint32_t color;
} Line;

typedef struct {
    uint32_t x1;
    uint32_t y1;
    uint32_t r;
    uint32_t color;
} Circle;

typedef struct {
    uint32_t x1;
    uint32_t y1;
    uint32_t x2;
    uint32_t y2;
    uint32_t color;
} Rect;

// ------------ FUNCTIONS ------------

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
uint32_t draw_line(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col);

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
uint32_t draw_circle(uint32_t x, uint32_t y, uint32_t r, Color col);



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
uint32_t draw_ellipse(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col);

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
uint32_t fill_rect(uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2, Color col);

/**
  * Copy the given font from CPU memory into GPU memory.
  * On success this function will return 0, on error this function will return a value greater than 0.
  * 
  * @param font
  * @return The result if the loading happend successfully (0) or not (> 0)
  */
uint32_t copy_font(uint32_t* font);

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
uint32_t draw_font(uint32_t x, uint32_t y, char character, Color col);

/**
  * Bit Blit a given Sprite with an alpha mask to the position (x | y). Sprites and alpha masks are of the size 8*8. 
  * On success this function will return 0, on error this function will return a value greater than 0.
  * 
  * @param x The starting X-Coordinate
  * @param y The starting Y-Coordinate
  * @param sprite The Sprite address to be drawn
  * @param mask Alpha Mask for the sprite
  * @return The result if the drawing happend successfully (0) or not (> 0)
  */
uint32_t draw_sprite(uint32_t x, uint32_t y, uint32_t* sprite, uint32_t* mask);


#endif // !__AEGIS_H
