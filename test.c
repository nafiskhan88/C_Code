#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

int num1 = 13;

//scanf("%s\n", string );

int bit1 ;
int i = 1;
int sum = 0;
int power = 1;
int bitposition = 2;

while (num1 != 0)
{
  bit1 = (num1 >> i) & 1;

  if (i == bitposition && bit1 == 1 )
      bit1 = 0;


  i++;
  num1 = num1 >> i;
  printf("sum %d i %d\n", bit1, i );

}


#if 0
for (i = 0; i <= 2; i++)
{
  power = power << i;
  sum = sum + (power);
  //printf("%d\n",sum );
  power = 1;

}
#endif

//}   //end testcase while


return 0;
}
