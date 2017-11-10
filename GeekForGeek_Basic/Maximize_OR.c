#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#if 0

Maximize OR [Editorial]


Any number less than A when taken bitwise or with A will always result in the number which
is either same as A or higher than A. The task here is to find all the numbers which will
result higher than A. We can solve this by finding the numbers which will result A when
taken bitwise OR with A. This can be calculated by counting the number of set bits in A.
For example  9 is written as 1001 in its binary representation. Observation here is than
if we take any number which has 1 in the 2nd or 3rd position of its binary representation
then the bitwise or result will always be higher than A. So we can take only the number
which has 1 in the same position as in A. This can be calculated by
x = 2^(Number of set bits in A)-1 So our required answer will be n-x Number of set bit can
be calculated by Brian Kernighan’s Algorithm  O(logn) time complexity.







#endif





int main()
{
//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){


//}   //end testcase while

int number = 0xAAAA;

int i ;

int n = number;


for ( i = 0; i <= number ;i++ )
  {
    number = number & (number - 1 );
  }
printf("%d\n",i );

printf("%d\n", (n - i) -1 );


//printf("%d\n",i );

return 0;
}
