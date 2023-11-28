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
//--XX  XXXX XXXX  XXXX XXXX  XXXX XXXX  XXXX XXXX
//--tt  tttt tttx  xxxx xxxx  yyyy yyyy  vhpp cccs
//--t-index number in vram to specify graphics tile
//--x,y-horizontal and vertical distance from top left corner of the screen
//--v,h,s-vertical and horizontal flipping, size of tile
//--p-priority, where higher values are displayed in front
//--c-color palette to be used

//OAM
//--
//--

//Display Area
//--
//--

//Limitations
//--
//--