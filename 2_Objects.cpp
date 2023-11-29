//--Objects
//Sprites vs. Objects
//Attributes
//OAM
//Display Area
//Limitations


//Sprites vs. Objects
//--Sprites are the composite of objects and code
//--Objects are the smaller fragments of pixels that make up a sprite
//--Objects move independently of the background

//Attributes
//--Objects read from palettes 8-15
//--Sizes are 8x8, 16x16, 32x32, and 64x64
//--Two sizes are allowed on screen at a time
//--XXXX XXXX  XXXX XXXX  XXXX XXXX  XXXX XXXX (XX)
//--tttt tttt  xxxx xxxx  yyyy yyyy  vhpp ccct (sx)
//--t-index number in vram to specify graphics tile
//--x,y-horizontal and vertical distance from top left corner of the screen.
//--v,h,s-vertical and horizontal flipping, size of tile
//--p-priority, where higher values are displayed in front
//--c-color palette to be used
//--isolated bits t and x are most significant bits of their categories

//OAM
//--544 bytes which contain...all the objects' attributes
//--this is enough room for 128 objects
//--Table A contains the first 32 attributes
//--Table B contains the last 2 attributes

//Display Area
//--between objects of the same priority, objects first in OAM are placed above later objects 

//Limitations
//--only 32 objects allowed on one scanline. otherwise, the highest priority are drawn
//--only 34 8x8 tiles allowed on one scanline. otherwise, the highest priority are drawn
