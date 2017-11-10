#include <stdio.h>
#include <string.h>
#include <math.h>


int setBit (int num, int pos)
{
  num |= (1 << pos);
  return num;
  //printf("%d\n", num);
}



int main()
{
//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){



int i;

int lower = 1;
int higher = 2;

int number = 8;
int newNumber;

//i = setBit(number, lower);


for (i = lower-1  ; i <= higher -1  ; i++ )
{

newNumber = setBit (number, i);
number = newNumber;


}


printf("%d\n", newNumber );



//}   //end testcase while





return 0;
}
