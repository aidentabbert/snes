//--DMA & HDMA
//Input/Output
//Direct Memory Access
//H-Blank DMA

//Input/Output
//--WRAM, SRAM, ROM, and Hardware Registers are memory mapped
//--OAM, CGRAM, VRAM are not memory mapped and require indirect access
//--registers write, read, and address this data
//--write:WRAM $2180, VRAM $2119 $2118, OAM $2104, CGRAM $2122
//--read:WRAM $2180, VRAM $213A $2139, OAM $2138, CGRAM $213B
//--address:WRAM $2183 $2182 $2181, VRAM $2117 $2116, OAM $2103 $2012, CGRAM $2121

//Direct Memory Access [$43--]
//--Transfers between A Bus and B Bus QUICKLY
//--8 DMA channels with 12 registers, to be prepared at once, completed sequentially
//--$4300-$437B, with instructions to $43-0to$43-6 required to be filled
//--$43-2to$43-4 holds A Bus address, $43-1 holds B Bus address
//--$43-5and$43-6 hold the number of bytes to transfer
//--$43-0's bits detail transfer process
//--X Direction; 1: A to B, 0: B to A
//--X 
//--X
//--X \ Auto Update  00: Increment 01: Neither
//--X /  Address:    10: Decrement 11: Neither
//--X \     Unit Size     000: 1 byte to 1 register   011: 4 bytes to 2 registers
//--X  |        &         001: 2 bytes to 2 registers 100: 4 bytes to 4 registers
//--X /  Transfer Format: 010: 2 bytes to 1 register

//H-Blank DMA
//--Read and write B Bus during blanking ONLY
//--HDMA uses same registers as DMA, but only 5 are set
//--$43-1 holds B Bus address, $43-2to$43-4 holds A Bus HDMA Table Base Address
//--HDMA table includes information as to what data should be transferred when
//--$43-0's bits detail transfer, similar to DMA
//--X Direction; 1: A to B, 0: B to A
//--X Addressing Mode; 1: Indirect, 0: Absolute
//--X
//--X
//--X
//--X \     Unit Size     000: 1 byte to 1 register   011: 4 bytes to 2 registers
//--X  |        &         001: 2 bytes to 2 registers 100: 4 bytes to 4 registers
//--X /  Transfer Format: 010: 2 bytes to 1 register
//