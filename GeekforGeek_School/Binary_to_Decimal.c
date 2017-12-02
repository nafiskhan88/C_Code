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

int number = 0xAA55;
int reminder = 0;
int binary[10000] = {0};
int i = 0 ;
int j = 0;

while ( number!= 0)
{
  reminder = number % 2;
  number = number / 2 ;
  binary[i] = reminder;
  i++;
  //printf("reminder %d number %d i %d\n", reminder, number, i );
}

for (j = i -1 ; j >=0 ; j--)
{
  printf("%d",binary[j] );
}

printf("\n");
//printf("%s\n",binary );

return 0;
}
