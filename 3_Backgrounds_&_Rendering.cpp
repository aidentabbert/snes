//--Backgrounds & Rendering
//Scrolling
//Characters
//Tilemaps
//Mosaic & Windowing
//Main & Sub Screen
//Color Math

//Scrolling
//--Background repeats if it continues to scroll
//--Background updates vertically and horizontally
//--Screen moves relative to background

//Characters
//--the tiles that make up a background
//--can be 8x8, 16x16, or 16x8
//--backgrounds are 32 or 64 characters

//Tilemaps
//--characters are found on a tilemap, found in vram
//--uses 16 bits to name each character, left to right, top to bottom
//--XXXX XXXX  XXXX XXXX
//--vhpc ccii  iiii iiii
//--v,h-vertical and horizontal flipping
//--p-priority characters, displayed above other backgrounds
//--c-color palette to be used with character

//Mosaic & Windowing
//--Mosaic effect enlargens the upper-left pixel of a grid of up to 16 pixel-long squares
//--Windowing effects mask or affect colors in the area of the window

//Main & Sub Screen
//--1. assemble objects according to priority and OAM order. Composite this as new layer
//--2. Bring in all backgrounds and apply mosaic/window effect if enabled
//--3. Organize backgrounds and objects according to true priority order
//--4. Bit switch can bring BG3 to front, for HUD purposes
//--5. Layers are separated into main screen and sub screen, according to registers
//--6. Apply color math (Window Color, Fixed Color, Math Settings, Main and Sub Screens)
//--7. Final drawn image!

//Color Math (In detail)
//--inputs are Layer data, Window data, Render settings
//--Layer data-4 backgrounds and the object layer
//--Window data-windows 1 and 2
//--Render settings-through main, through sub, through main window, through sub window,
//--                window 1 enable, window 2 enable, window 1 i/o, window 2 i/o, window
//--                combination logic, main color window switch, sub color window switch,
//--                BG3 high priority switch, fixed color, fixed color sub screen switch,
//--                color math enable flags, addition/subtraction switch, half enable flag
//--each pixel has the color data for each layer, plus a bit for window 1 and window 2
//--render settings apply to one screen
//--window 1 enable switches (W1En) enable the window for each layer
//--window 1 i/o (W1IO) invert the window for each layer, causing inside to read as outside
//--W1En and W1IO both have window 2 counterparts
//--window combination logic (WinLog) combines these windows into one stream
//
//--layer data splits priority bits into two channels for main and sub screens
//--through main (TM) and through sub (TS) enable pixels to be displayed
//--through main window (TMW), through sub window (TSW) allow window logic to act on layer data
//--priority circuits select a priority color to be used for each pixel
//--BG3 high priority switch (BG3Pri) acts on priority switch to choose BG3
//--fixed color (COLDATA) holds backup color in case no color is displayed for a pixel
//--fixed color sub screen switch (Fix/Sub) displays entire subscreen as fixed color
//--main color window switch (MainSW) enables main screen
//--sub color window switch (SubSW) enables sub screen
//--select circuit uses layer source of each pixel plus the color math enable flags (ColorEn)
//--math circuit uses addition/subtraction flag and half enable flag (Add/Sub, HalfEn)