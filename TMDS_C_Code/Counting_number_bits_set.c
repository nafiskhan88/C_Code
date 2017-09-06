
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



    int NumberofOne(int value){

    unsigned int count = 0;

    while (value > 0) {           // until all bits are zero
        if ((value & 1) == 1)     // check lower bit
            count++;
        value >>= 1;              // shift bits, removing lower bit
        //printf("Value %x  Count %d\n", value, count );
      }
    return count;
    }



int main()
{

unsigned char i,N1,N0, data, D1;
unsigned char q_m[8];
unsigned char D[8];
unsigned int temp, temp1;
unsigned char q_out[10]; 
unsigned char cnt_t_1 = 0;


  data = 0x66;

  N1 = NumberofOne(data);
  N0 = 8- N1;
  printf("Number of 1:%d Number of 0:%d\n",N1, N0 );

  for (i=0; i<8; i++)
    {
        D[i] = (data >> i) & 1;
        //printf("Bit position:%1X D[i]:%X\n", i, D[i]);
    }



  if ((N1 >= 4 ) | (D[0] == 0))
  {

      q_m[0] = D[0];
      printf("q_m [0]%x\n",q_m[0] );
      for (i = 1; i <9; i++)
      {
      //q_m[i] = ((data >> i) & 1);
        q_m[i] = (!(q_m[i-1] ^ (data >> i) & 1));  //XNOR operation
        if (i == 8)
          q_m[i] = 0;
          printf("Bit position if:%1X q_m:%X\n", i, q_m[i]);
      }   //end for loop for q_m[8:0]
  }
  else 
  {
      
      q_m[0] = D[0];
      printf("q_m [0]%x\n",q_m[0] );
      for (i = 1; i <9; i++)
      {
      //q_m[i] = ((data >> i) & 1);
        q_m[i] = ((q_m[i-1] ^ (data >> i) & 1));   //XOR Operation
        if (i == 8)
          q_m[i] = 1;
          printf("Bit position else:%X q_m:%X\n", i, q_m[i]);
      }   //end for loop for q_m[8:0]


  }


  if ( N1 == 4) //(cnt_t_1 == 0 ) || (N1 == 4) )
  {
    temp1 = q_m[8];
    q_out[9] = !(temp1);
    q_out[8] = q_m[8];
    printf("q_out 9 :%x\n",q_out[9]);

    if (q_out[8] == 0)
    {
    
    for (i= 0 ; i < 8; i++)
      {
      temp1 = (q_m[i] ) ;
      q_out[i] = ! (temp1) ; 
      printf("Bit position q_out:%1X q_out:%X\n", i, q_out[i]);
      }
    }
  }
  else
  {
  if ( ( N1 > N0 ) || ( N0 > N1 ) )   //((cnt_t_1 > 0 ) && (N1 > N0)) || ((cnt_t_1 < 0) || (N0 > N1))
      {

        q_out[9] = 1;
        q_out[8] = q_m [8] ;

        for (i= 0 ; i < 8; i++)
        {
        temp1 = (q_m[i] ) ;
        q_out[i] = ! (temp1) ; 
        printf("Bit position q_out:%1X q_out:%X\n", i, q_out[i]);
        }

      }

      else
      {

        q_out[9] = 0;
        q_out[8] = q_m [8] ;

        for (i= 0 ; i < 8; i++)
        {
        //temp1 = (q_m[i] ) ;
        q_out[i] = q_m[i] ; 
        //printf("Bit position q_out:%1X q_out:%X\n", i, q_out[i]);
        }

      }
}
temp = 0x0;

  for (i=0; i<10; i++)
    {
        temp += (q_out[i] << i);
        printf("q_m[%X]:%X q_out [%X]:%X\n", i, q_m[i],i, q_out[i]);
        
    }

    printf("temp %X\n",temp );

return 0;

}
























/*

unsigned int value = 0xAAA;
unsigned int count = 0;

    while (value > 0) {           // until all bits are zero
        if ((value & 1) == 1)     // check lower bit
            count++;
        value >>= 1;              // shift bits, removing lower bit
        //printf("Value %x  Count %d\n", value, count );

    }
    return count;
    










// Bit counting native way 



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
