//--Graphics & Palettes
//Direct Color
//Indirect Color
//Color Depth
//Bitplanes
//Palettes


//Direct Color []
//--2 bytes per pixel
//--XXXX XXXX  XXXX XXXX
//--TBBB BBGG  GGGR RRRR
//--each color value gets 5 bits
//--t signifies transparency when switched on

//Indirect Color []
//--each pixel's color is indexed
//--each pixel is represented by an index
//--lowest index (0) is transparent
//--index numbers are represented by bits in bitplanes

//Color Depth []
//--SNES supports different color depths for more index numbers
//--2BPP, 4BPP, 8BPP
//--8BPP can be stored in direct color

//Bitplanes []
//--bitplanes are stored least significant bit of the index first, going up
//--so data is stored: line by line, plane by plane, front to back, top to bottom, per 2BPP

//Palettes []
//--CGRAM can hold 256 colors in its memory
//--data is read from palette according to BPP format