#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main()
{

/*
double f = 53.456;

//printf("%f\n",f );

	int temp1 = f;

	//printf("%f\n",temp1 );
	int count1 = 0;
	int count2 = 0;
	while (temp1 > 0)
	{
		temp1 = temp1 / 10;

		count1++;
		

	}
	int temp2 = f;
	//printf("%f\n",temp2);
	while ((double)temp2 != f) {
		f = f * 10;
		temp2 = f;
		count2++;
		printf("%d\n",temp2 );
	}

	printf("Integer Count = %d, Decimal count = %d", count1, count2);


	

int a = 3;
 int b = 6;
 int c = 4;

 if ((a > 4) || (a ==4 && c == 5))
	printf("aaa");
else
	printf ("bbb");


	
	uint32_t u32;
	uint16_t u16;
	uint8_t u8;

	u32 = 40000;
	u16 = 30000;
	u8 = 0xffU;

	//printf("%ld %ld %ld\n",&u32, &u16, &u8 );
	printf("Result : %x\n", ~u8);

	*/

	int LFSR, data, result;

	LFSR = 0x2E;
	data = 0x85;

	result = LFSR ^ data;

	printf("%X\n", result);








	return 0;
}