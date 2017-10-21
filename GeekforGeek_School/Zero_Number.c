#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

//scanf("%s\n", string );

char number [] = "2001";

int length = strlen(number);

char check;

int i ,j = 1;



for (i = 0; i < length; i++)
{

check = number[i];
  
if (i == 0 && check == 48)
  {
    j = 0;
    break;
  }

if ( i > 0  && check != 48)
{
    j= 0;
}

if ( i > 0 && check == 48)
{
    j = 1;
    break;
}


}

if (j == 1)
  printf("Yes");
else
  printf("No");



return 0;
}