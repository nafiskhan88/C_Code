#include <stdio.h>


void PrintNumber(int number)
{
if (number >= 1)
  {
  //printf(" n %d\n",number );
  PrintNumber (number -1);
  printf("%d ",number);

  }

}



int main()
{

int testcase;

scanf("%d\n",&testcase );


while (testcase--)
{
int number;
scanf("%d\n",&number );
//int number = 10;

PrintNumber(number);
printf ("\n");


}//end while



return 0;
}
