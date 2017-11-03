#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

//char string [] = "ggggggg";


//char string [10000];
//scanf("%s\n", string );

int num1 = 0;
int num2 = 0;

int bit1 = 0;
int bit2 = 0;

int i = 0;




if (num1 == 0 && num2 == 0)

  printf("%d\n", i );

else
{
  while ( (bit1 ^ bit2) != 1)
  {

  bit1 =  ( (num1 >> i) & 1) ;
  bit2 =  ( (num2 >> i) & 1) ;
  i++;
  //printf(" i %d bit1 %d bit2 %d\n",i, bit1, bit2 );
  /* code */
  }
  printf("%d\n", i );
}



//for (i = 0; i < )



//}   //end testcase while


return 0;
}
