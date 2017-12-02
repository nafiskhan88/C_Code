#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


bool WodongNumber (int n)

{
  if (n % 2 == 0)
    return false;

  if ( n == 1)
      return true;

  n++;
  int power = 0;
  while ( n % 2 == 0)
  {
    n = n / 2;
    power++;

    if (n == power)
      return true;
    }
    return false;
}




int main()
{
//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

int n = 23;

//bool value = WodongNumber(n);

if (WodongNumber (n))
  printf("1 \n");
else
  printf("0 \n");


//}   //end testcase while





return 0;
}
