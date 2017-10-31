#include <stdio.h>
#include <string.h>


//advanced Approach
int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main()
{

int num = 8;
int i;
int result = 0;


//Naive Approach
for ( i = 0 ; i <= num ; i++)
{
  result = result ^ i ;
  printf("i %x result %x \n",i, result );

}


int result1 = computeXOR(num);
printf("Direct method : %x\n", result1);



/*
printout
num = 8;

i 0 result 0
i 1 result 1
i 2 result 3
i 3 result 0
i 4 result 4
i 5 result 1
i 6 result 7
i 7 result 0
i 8 result 8
Direct method : 8

*/


return 0;
}
