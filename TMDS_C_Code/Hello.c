
#include <stdio.h>
#include <stdlib.h>



int main()
{


//printf ("hELLO");









unsigned int value = 0xAAA;
unsigned int count = 0;

    while (value > 0) {           // until all bits are zero
        if ((value & 1) == 1)     // check lower bit
            count++;
        value >>= 1;              // shift bits, removing lower bit
        printf("Value %x  Count %d\n", value, count );

    }
    //return count;
    










// Bit counting native way 


/*
unsigned int v = 0xAA; // count the number of bits set in v
unsigned int c; // c accumulates the total bits set in v
unsigned int count;

count = 0;
for (c = 0; v; v >>= 1)
{
  count++;
  c = c + (v & 1);
  printf("V=  %d  C =%d  Count %d\n",v,c, count);
}













//printf("%d %d\n",v,c);




int a = 0x1234;

int b = a >> 8	;

printf("%x\n",b );
*/

return 0;
}