#include <stdio.h>
#include <stdlib.h>

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


unsigned char i,N1,N0, data, D1, N1_qm, N0_qm;
unsigned char q_m[8];
unsigned char D[8];
unsigned short temp;
unsigned char q_out[10]; 
unsigned char cnt_t_1 = 0;
unsigned char temp1[1],temp2[1];

  q_m [8] = 0x0;

  data = 0x60;

  printf("TMDS Data %X\n", data);

  N1 = NumberofOne(data);
  N0 = 8- N1;
  printf("Number of 1 =%d\nNumber of 0 =%d\n",N1, N0 );

  for (i=0; i<8; i++)
    {
        D[i] = (data >> i) & 1;
        //printf("Bit position:%1X D[i]:%X\n", i, D[i]);
    }



  if ((N1 > 4 ) || ( (N1== 4) && (D[0] == 0)))
  {

      q_m[0] = D[0];
      //printf("q_m [0]%x\n",q_m[0] );
      for (i = 1; i <=8; i++)
      {
        //q_m[i] = ((data >> i) & 1);
        q_m[i] = (!(q_m[i-1] ^ D[i] ));  //XNOR operation
        if (i == 8)
          q_m[i] == 0;
          //printf("Bit position if:%1X q_m:%X\n", i, q_m[i]);
      }   //end for loop for q_m[8:0]
  }

  else 
  {
      
      q_m[0] = D[0];
      printf("q_m[0] : %x\n",q_m[0] );
      for (i = 1; i <= 8; i++)
      {
      //q_m[i] = ((data >> i) & 1);
        q_m[i] = ( q_m[i-1] ^ D[i]);   //XOR Operation
        if (i == 8)
          q_m[i] == 1;
          //printf("Bit position else:%X q_m:%X\n", i, q_m[i]);
      }   //end for loop for q_m[8:0]


  }

    
        temp2 [1] = 0;
        temp2 [1] = q_m[8] ;
        //printf("temp2:%x\n",temp2[1]);
        q_out[9] = !(temp2[1]);
        q_out[8] = temp2[1];
        //printf("q_m[8]:%x\n",temp2[0]); //NEED to know : when uisng int type variable for transfering q_m[8] then q_m[8]value changes

    
      
        temp1[1] = 0;
        //printf("q_m [8]:%x\n",q_m[8] );
        if (q_m[8] == 1)
        {
          for (i = 0; i <8 ; i++)
          {
          //printf("q_m :%x\n",q_m[i] );
          q_out[i] = q_m[i];
          printf("if Bit position:%1X temp1:%X q_out%x\n", i, temp1[1], q_out[i]);
          //printf("Bit position:%1X q_out:%X\n", i, q_out[i]);
          }
        }
        else
        {
          temp1[1] = 0 ;
          for (i = 0; i <8 ; i++)
          {
          temp1[1] = q_m[i] ;
          q_out[i] = ! (temp1[1]) ;
          //printf("else Bit position:%1X temp1:%X q_out%x\n", i, temp1[1], q_out[i]);
          }
        }
    

      temp = 0x0;
      for (i=0; i<10; i++)
      {
        temp += (q_out[i] << i);
        //printf("q_m[%X]:%X q_out [%X]:%X\n", i, q_m[i],i, q_out[i]);
      }

      printf("1st: %X\n",temp );
// OK upto this point

        q_out[9] = 1;
        q_out[8] = temp2 [1] ;
        //printf("q_m[8]:%x\n",temp2[1]);
        for (i= 0 ; i < 8; i++)
        {
        temp1[1] = (q_m[i] ) ;
        q_out[i] = ! (temp1[1]) ; 
        //printf("Bit position:%1X q_out:%X\n", i, q_out[i]);
        }

        temp = 0x0;

        for (i=0; i<10; i++)
        
        {
        temp += (q_out[i] << i);
        //printf("q_m[%X]:%X q_out [%X]:%X\n", i, q_m[i],i, q_out[i]);
        }

        printf("2nd :%X\n",temp );



        q_out[9] = 0;
        q_out[8] = temp2 [1] ;
        //printf("q_m[8]:%x\n",q_m[8]);

        for (i= 0 ; i < 8; i++)
        {
        //temp1 = (q_m[i] ) ;
        q_out[i] = q_m[i] ; 
        //printf("Bit position:%1X q_out:%X\n", i, q_out[i]);
        }

      

        temp = 0x0;

        for (i=0; i<10; i++)
        {
        temp += (q_out[i] << i);
        //printf("q_m[%X]:%X q_out [%X]:%X\n", i, q_m[i],i, q_out[i]);
        
        }
        printf("3rd :%X\n",temp );



return 0;
}





















/*
unsigned int x = 0xFF;
unsigned char y1, y2, y3;
unsigned char bitout[8];
int i;
//y1 = (x & 0x55555555 ) ;
//y2 =((x >> 1) &  0x55555555);
y3 = 0x44;

printf("%x\n", y3);



for (i=0; i<8; i++)
    {
        bitout[i] = (y3 >> i) & 1;
       	//printf("%x Bit Number%d\n",bitout[i],i );
    }


y1 = 0x0;
for (i=0; i<8; i++)
    {
        y1 += (bitout[i] << i);
        //printf("%x Bit Number%d\n",bitout[i], i );
        
    }

printf("%x\n", y1);



unsigned char a [8];
unsigned char b  ;
unsigned char c ;

//c = c ^ (1 << a) ;
a[8] =0;

c = (a >> 1) & 1;
printf("Bit flip %x\n",c );

*/
