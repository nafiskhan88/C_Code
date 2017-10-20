#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

char string [] = "ggggggg";


//char string [10000];
//scanf("%s\n", string );
int length = strlen(string);

int i = 0;
char check = '0';

int j = 0;
int k = 1;

//for (i = 0; i <length ; i++)
while (string[i] != '\0')
{
check  = string[i];

  for ( j = i + 1; j < length; j++)
  {
    char second = string [i+1];
    printf("check %c second %c bool %d\n", check, second, k );
    if (check != second)
    {
      k = 0;
      break;
    }

 }
i++;
}
if ( k == 1)
  printf("YES");
else
  printf("NO");


return 0;
}
