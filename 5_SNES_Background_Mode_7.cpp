//--MODE 7
//Graphics & Tilemap
//EXTBG
//Transformations
//Derivation

//Graphics & Tilemap
//--Data entered directly into VRAM $0000, where graphics data is interleaved with tilemap data
//--Graphics are 8BPP, indirect or direct 8-bit color
//--Mode 7 gets 256 characters
//--Tilemap 128x128
//--Mode 7 has the option to instead display a single 8x8 tile or the fixed color offbounds

//EXTBG
//--allows an extra 7BBP Background 2

//Transformations
//--Mode 7 allows translation, scaling, rotation, reflection, shearing, and any combination
//--non-linear effects (like perspective) require the help of HDMA to be accomplished
//--horizontal and vertical registers move screen across background
//--x and y points create the fixed point for a rotation or scaling
//--a and c points modify horizontal skew (a stretches, c shears)
//--b and d points modify vertical skew (d stretches, b shears)

//Derivation
//--x' = a*(x+h-x_0) + b*(y+h-y_0) + x_0
//--y' = c*(x+h-x_0) + d*(y+h-y_0) + y_0
//--cos(x) = A = D
//--sin(x) = B = -C