#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

//scanf("%s\n", string );

int number = 56;
int i, j;

for ( i = 0; i <number ; i++)
{
  j = i* (i+1);
  
  if ( j > number)
    break;
  printf("%d ",j );


}
//}  //end while




return 0;
}
