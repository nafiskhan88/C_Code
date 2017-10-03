#include <stdio.h>
#include <string.h>

int main()
{

int testcase;

scanf("%d\n",testcase );


while (testcase--)
{

long number;
scanf("%ld\n", &number);

long ReverseNumber = 0;

while (number != 0)
{
ReverseNumber  = ReverseNumber * 10 + number %10;
number = number / 10;
}
printf("%ld\n",ReverseNumber );


}//end while



return 0;
}
