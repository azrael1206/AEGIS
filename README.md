# AEGIS - Architecture for Embedded Graphical Interfaces

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

AEGIS is the implementation of an embedded GPU in SpinalHDL.
As this project is still under heavy development use it with caution.

## Requirements

- Scala Build Tool (sbt)
- Vivado or Quartus

## Features

- VGA up to 720p 60Hz
- double Framebuffer
- Line and Cirlce Drawing through the Bresenham Algorithm
- fill a Retancle

Planned are:

- [x] Video output
- [x] Framebuffer (Double-Buffering)
- [x] Bus to a CPU (RISC V, VexRiscv)
- [x] Blitter
- [x] Line drawing through the Bresenham Algorithm
- [x] Circle drawing through the Bresenham Algorithm
- [ ] Ellipse drawing through the Bresenham Algorithm?
