#include <stdio.h>

int main()
{

	
	int a = 0xABCD;
	int mask1 = 0x000F;
	int mask2 = 0x00F0;
	int temp1, temp2 ;
	int b;



	temp1 = a & mask1;
	temp2 = a & mask2;
	b = (temp2 >> 4| temp1 << 4) ;
	printf("%x\n",b );



	return 0;
}