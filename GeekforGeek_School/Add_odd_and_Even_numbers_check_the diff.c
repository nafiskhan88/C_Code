#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

//scanf("%s\n", string );

char num[10000] = "123";



int i;
int odd_sum = 0 ;
int even_sum = 0;
int length = strlen(num);


for (i = 0; i <length ; i++)
    {
      if (i % 2 == 0)
        even_sum = even_sum + (num[i]-48);
      else
        odd_sum = odd_sum + (num[i]-48);
    }

    if (even_sum == odd_sum)
      printf("Yes\n");
    else
      printf("No\n");


    //printf("Even:%d Odd: %d\n",even_sum, odd_sum );


//}  //end while




return 0;