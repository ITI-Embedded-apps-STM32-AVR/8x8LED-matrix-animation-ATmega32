/*
 * main.c
 *
 *  Created on: Feb 27, 2020
 *      Author: SARA
 */

#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "PORT_interface.h"
#include "LED_MatrixCofig.h"
#include "LED_MatrixInterface.h"
#include "STD_TYPES.h"


int  main()
{
PortInit();
LedMatrixInit();
u8 pattern[8]=
		   {
				   	0b11111111,
					0b10000000,
					0b10000000,
					0b11111111,
					0b00000001,
					0b00000001,
					0b00000001,
					0b11111111
		   };


while(1)
{
	LedMatrixSetPattern(pattern,RED);
}
return 0;
}
