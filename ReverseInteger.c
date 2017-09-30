#include <stdio.h>


int main()

{


	void ReverseInteger( int Number)
    {
     int RevNum = 0;
     int Original = Number;

     
   while ( Number != 0) 
   {

   RevNum = (RevNum * 10) + Number % 10 ; 
   Number = Number / 10;
   //printf("%d %d %d\n",num1, RevNum, i );
   }

    printf("Original Number: %d  Reverse Number: %d\n", Original , RevNum );
   }

	int num1 = -12345;
     
    ReverseInteger (num1);

   

	return 0;
}



#include <stdio.h>

int main()
{
    int num1 = -12345;
     
    reverse(num1);

	return 0;
}
    