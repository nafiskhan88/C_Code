#include <stdio.h>
#include <stdlib.h>


int main()
{

unsigned char i , D[10], temp = 0, q_out[8] = {0};
int data, input ;


input = 0x38C;


        data = input;
        for (i= 0; i <11; i++)
    {
        D[i] = (data >> i) & 1;
        //printf("Bit position:%1X Original TMDS D[i]:%X\n", i, D[i]);
    }

        if (D[9] == 1)
        {

            for (i = 0; i <= 7 ; i++)
            {
        	   D[i] = !D[i];
        	   //printf("D[9] = 1 Bit position:%1X D[i]:%X\n", i, D[i]);
    	   }

        } //endif D[9] = 1


        if (D[8] == 1)
        {
            q_out[0] = D[0];

            for (i = 1 ; i <= 7 ; i ++)

            {
                q_out[i] = D[i] ^ D[i-1];
                //printf("XOR bit position %X q_out :%X D[i] %X ^ D[i-1]:%X\n", i, q_out[i], D[i], D[i-1]);
            }
        }

        else
        {
            for (i = 1 ; i <= 7 ; i ++)

            {
                q_out[i] = !(D[i] ^ D[i-1]);
                //printf("XNOR Bit position:%1X D[i]:%X\n", i, D[i]);
            }

        }

        for (i=0; i<=7; i++)
        {

        temp += (q_out[i] << i);
        //printf("%X q_out [%X]:%X\n", i, i, q_out[i]);
        }

        printf("Input 10 bit data %X, TMDS 8 bit Data : %X\n" , input, temp);





return 0;
}
