#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "LED_MatrixCofig.h"
#include "LED_MatrixInterface.h"
#include "DIO_interface.h"
#include <avr/delay.h>


u8  Led_Row_COMMAN_Port[8]={
	R0_COMMON_PORT_0,
	R1_COMMON_PORT_1,
	R2_COMMON_PORT_2,
	R3_COMMON_PORT_3,
	R4_COMMON_PORT_4,
	R5_COMMON_PORT_5,
	R6_COMMON_PORT_6,
	R7_COMMON_PORT_7
	
};

u8  Led_Row_COMMAN_Pin[8]={
	R0_COMMON_PIN_0,
	R1_COMMON_PIN_1,
	R2_COMMON_PIN_2,
	R3_COMMON_PIN_3,
	R4_COMMON_PIN_4,
	R5_COMMON_PIN_5,
	R6_COMMON_PIN_6,
	R7_COMMON_PIN_7
	
};

/*u8  Led_Col_Yellow_Port[8]={
	C0_YELLOW_PORT_0,
	C1_YELLOW_PORT_1,
	C2_YELLOW_PORT_2,
	C3_YELLOW_PORT_3,
	C4_YELLOW_PORT_4,
	C5_YELLOW_PORT_5,
	C6_YELLOW_PORT_6,
	C7_YELLOW_PORT_7
	
};

u8  Led_Col_Yellow_Pin[8]={
	C0_YELLOW_PIN_0,
	C1_YELLOW_PIN_1,
	C2_YELLOW_PIN_2,
	C3_YELLOW_PIN_3,
	C4_YELLOW_PIN_4,
	C5_YELLOW_PIN_5,
	C6_YELLOW_PIN_6,
	C7_YELLOW_PIN_7
	
};

u8  Led_Col_Red_Port[8]={
	C0_RED_PORT_0,
	C1_RED_PORT_1,
	C2_RED_PORT_2,
	C3_RED_PORT_3,
	C4_RED_PORT_4,
	C5_RED_PORT_5,
	C6_RED_PORT_6,
	C7_RED_PORT_7
	
};

u8  Led_Col_Red_Pin[8]={
	C0_RED_PIN_0,
	C1_RED_PIN_1,
	C2_RED_PIN_2,
	C3_RED_PIN_3,
	C4_RED_PIN_4,
	C5_RED_PIN_5,
	C6_RED_PIN_6,
	C7_RED_PIN_7
	
};

*/
u8 Led_Col_Pin [8][2]=
{
		    {C0_PIN_0,C1_PIN_1 } ,
			{C2_PIN_2,C3_PIN_3 },
			{C4_PIN_4,C5_PIN_5},
			{C6_PIN_6,C7_PIN_7},
			{C8_PIN_8,C9_PIN_9},
			{C10_PIN_10,C11_PIN_11},
			{C12_PIN_12,C13_PIN_13},
			{C14_PIN_14,C15_PIN_15}
};



u8 Led_Col_Port [8][2]=
{
		   {C0_PORT_0,C1_PORT_1 } ,
		   {C2_PORT_2,C3_PORT_3 },
		   {C4_PORT_4,C5_PORT_5},
		   {C6_PORT_6,C7_PORT_7},
		   {C8_PORT_8,C9_PORT_9},
		   {C10_PORT_10,C11_PORT_11},
		   {C12_PORT_12,C13_PORT_13},
		   {C14_PORT_14,C15_PORT_15}
};



void LedMatrixInit(void)
{
	u8 i;
	u8 col=0;

	for(i=0;i<8;i++)
	{
			SetPinDirection(Led_Row_COMMAN_Port[i],Led_Row_COMMAN_Pin[i],1);
			for (col=0;col<2;col++)
			{

				SetPinDirection(Led_Col_Port[i][col],Led_Col_Port[i][col],1);

			}


	}



	/*for (i=0;i<8;i++)
	{
		SetPinDirection(Led_Row_COMMAN_Port[i],Led_Row_COMMAN_Pin[i],1);
		SetPinDirection(Led_Col_Yellow_Port[i],Led_Col_Yellow_Pin[i],1);
		SetPinDirection(Led_Col_Red_Port[i],Led_Col_Red_Pin[i],1);
	}*/
	
}
void LedMatrixSetPattern(u8 *data,u8 color)
{
	u8 col=0;
	u8 row=0;
   for(row=0;row<8;row++)
   {
	  SetPinValue(Led_Row_COMMAN_Port[row],Led_Row_COMMAN_Pin[row],0);

			  for(col=0;col<8;col++)
			  {




			  }


		   _delay_ms(3);
		   SetPinValue(Led_Row_COMMAN_Port[row],Led_Row_COMMAN_Pin[row],1);
   }

	/*for (row=0;row<8;row++)
	{
		SetPinValue(Led_Row_COMMAN_Port[row],Led_Row_COMMAN_Pin[row],0);
		for (col=0;col<8;col++)
		{
				switch (color)
				{
					case YELLOW:
					SetPinValue(Led_Col_Yellow_Port[col],Led_Col_Yellow_Pin[col], GET_BIT(data[row],(7-col)));
					break;
					case RED:
					SetPinValue(Led_Col_Red_Port[col],Led_Col_Red_Pin[col], GET_BIT(data[row],(7-col)));
					break;
					default:
					SetPinValue(Led_Col_Red_Port[col],Led_Col_Red_Pin[col], GET_BIT(data[row],(7-col)));
					break;
				}
		}
		_delay_ms(3);
		SetPinValue(Led_Row_COMMAN_Port[row],Led_Row_COMMAN_Pin[row],1);
	}*/
	
}
