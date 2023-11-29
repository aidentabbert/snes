//--SNES Background Modes
//Number of Backgrounds
//Bit Depths
//Special Features

//Number of Backgrounds
//--0 1 2 3 4 5 6
//--4 3 2 2 2 2 1

//Bit Depths
//-------0 1 2 3 4 5 6
//--2BBP 4 1 0 0 1 1 0
//--4BBP 0 2 2 1 0 1 1
//--8BBP 0 0 0 1 1 0 0

//Special Features
//--Modes 0-4 all support mosaic and color math, limited interlacing, pseudo-H512
//--Modes 2,4,6 uses the data for BG3 to create vertical offset of characters for BG1,2 or both
//--Mode 3 can use direct-color for BG1
//--Mode 4 can only use vertical offset when there is no vertical scrolling
//--Mode 5 uses 16x8 pixels, as mode 5 squishes 512 pixels into the 256 wide horizontal space
//--Modes 5 and 6 use interlacing to double vertical resolution
//--Mode 6 combines Mode 2 and Mode 5