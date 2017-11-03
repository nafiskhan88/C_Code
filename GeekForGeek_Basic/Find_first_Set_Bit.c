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

int num = 3;

int bit = 0;

int i = 0;

if (num == 0)
printf("%d\n", i );
else
{
while (bit != 1) {
  bit =  ( (num >> i) & 1) ;
  i++;
  /* code */
}

printf("%d\n", i );
}



//for (i = 0; i < )






return 0;
}
