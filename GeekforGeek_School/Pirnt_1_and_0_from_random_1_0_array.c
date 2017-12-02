#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

//int num1 = 0xAA;

int arr[] = {0 ,0 ,0 ,0 ,0};

int size  = sizeof (arr) /sizeof arr[0];

//printf("%d\n",size );

int i;

int NumberofOne = 0;
int zero = 0;
int final_array [size];

for (i  = 0 ; i < size ; i++)
{
  if (arr[i] == 1)
      NumberofOne ++;
  else
      zero ++;
}

for ( i = 0; i < zero ; i++)
    final_array[i] = 0;

for (i  = zero ; i < NumberofOne + zero; i++)
    final_array[i] = 1;
//scanf("%s\n", string );

for (i = 0; i < NumberofOne + zero; i++)
    printf("%d\n",final_array [i] );
//}   //end testcase while





return 0;
}
