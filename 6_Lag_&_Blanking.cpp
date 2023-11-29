//--Lag & Blanking
//CRT Monitor
//H/V Counters
//Blanking
//Execution Frame

//CRT Monitor
//--Blanking is when the electron beam is disabled
//--F-blank is when the electron beam is forced to blank, allows registers to update
//--NTSC runs at 60.1 Hz (fps)
//--Frame is 16.64 milliseconds long
//--224/262 is display time, 38/262 is v-blank time
//--1/224 is one scanline, 63.51 microseconds of time.
//--256/340 of a scanline is the sweep, 84/340 is h-blank

//H/V Counters
//--$213C counts the progress along the sweep, starting at 22 going through 277 max at 339
//--$213D counts the number of h-blanks, starting at 1 going through 224 max at 261

//Execution Frame
//--Main game loop -> spinning -> v-blank routine ->...
//--v-blank routine starts at nonmaskable interrupt
//--v-blank starts at 0,225 and ends at 339,261
//--game loop starts at 0,0 and ends at 339,224
//--Black line at top of screen can flicker if v-blank runs over
//--Picture is drawn twice if main game loop runs over