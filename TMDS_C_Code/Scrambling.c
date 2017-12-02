
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



int advanceLFSR(int count, int lfsrSeed){

  int i,k;
  int bit[16];
  int bitout[16];
  int newlfsr;
  unsigned char upper8bits;
  
  //lfsrSeed = 0xFFFD;

  int cycle = count*8 ;                             //run loop times the desired LFSR value. HDMI scrambler takes every 8th value

  for (k = 1; k <= cycle; k++)                     //loop for counting the desired LFSR
  {

    for (i=0; i<16; i++)                          //convert LFSR seed value to Array
    {
       bit[i] = (lfsrSeed >> i) & 1;
      //printf("%x\n Bit Number%d\n",bit[i], i );
    }


    /* LFSR logic from HDMI 2.0 spec, page 37/245
    
    LFSR polynomial:

    G(x) = 1+ x11+x12+x13+x16

    Initial seed value for CH0= 0xFFFF
    Initial seed value for CH1= 0xFFFE
    Initial seed value for CH2= 0xFFFD

    */

    bitout[0] =bit[15];
    bitout[1] =bit[0];
    bitout[2] =bit[1];
    bitout[3] =bit[2];
    bitout[4] =bit[3];
    bitout[5] =bit[4];
    bitout[6] =bit[5];
    bitout[7] =bit[6];
    bitout[8] =bit[7];
    bitout[9] =bit[8];
    bitout[10] =bit[9];
    bitout[11] = bit[10] ^ bit[15];
    bitout[12] = bit [11] ^ bit [15];
    bitout [13] = bit [12] ^ bit[15];
    bitout[14] = bit[13];
    bitout [15] = bit [14];

    newlfsr = 0x0;

    for (i=0; i<16; i++)                          //converting LFSR from an array to integer
    {
        newlfsr += (bitout[i] << i);
        //printf("%x\n Bit Number%d\n",bit[i], i );
    }

    //if (k % 8 == 0 )
    if ( k == cycle){
    upper8bits = newlfsr >> 8;
    //printf("%02X\n", upper8bits);
    }
    lfsrSeed = newlfsr;
  
}//end SeedValue for loop

return upper8bits;
} //end advanceLFSR fucntion








// function for reversing bit 15 to 8 received from  LFSR

unsigned char reverse(unsigned char b) {
   b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
   b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
   b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
   return b;

}

















int main()

{

unsigned char LFSRValue, Reversed_data, GuardBand, XoRresult;

/*
Initial seed value for CH0= 0xFFFF
Initial seed value for CH1= 0xFFFE
Initial seed value for CH2= 0xFFFD
*/


int i = 85;





LFSRValue = advanceLFSR(i, 0xFFFD);
//printf(" LFSR Upper 8 bits:%X\n",LFSRValue );

Reversed_data = reverse(LFSRValue);

//GuardBand = 0x55;

//XoRresult = Reversed_data ^ GuardBand;

//printf(" Reverse Byte from LFSR :%X\n XoR value:%X\n",Reversed_data, XoRresult );

printf("Line number: %d LFSR :%X\n ",i, Reversed_data );



return 0;
}
