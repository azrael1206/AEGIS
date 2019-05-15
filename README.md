# AEGIS - Architecture for Embedded Graphical Interfaces

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

AEGIS is the implementation of an embedded GPU in SpinalHDL.
As this project is still under heavy development use it with caution.

## Requirements

- Scala Build Tool (sbt)
- Vivado

## Features

As of now the only two features are a VGA output @ 720p with 60Hz and the beginning of a Framebuffer.

Planned are:

- [x] Video output
- [ ] Framebuffer
- [ ] Bus to a CPU (RISC V, VexRiscv?)
- [ ] Blitter
- [ ] Line drawing through the Bresenham Algorithm

