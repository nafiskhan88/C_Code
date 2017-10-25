#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

int num1 = 5;

//scanf("%s\n", string );

int i = 0;
int rem1;
int ref = 1;

if (num1 == 0)
  i = 1;

while (num1 != 0) {

  rem1 = num1 % 2;
  if ( (rem1 ^ ref) != 0)
  {
      i = 1;
      break;
    }
  num1 = num1 /2;
  /* code */


}
i == 1 ? printf("NO"): printf("YES");


//}   //end testcase while


return 0;
}
