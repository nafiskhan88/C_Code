#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void swap(int *number1, int *number2)

{
    int temp;
    
    temp = *number1;
    *number1 = *number2;
    *number2 = temp; 

}


int main() {

    int testcase;
    scanf ("%d", &testcase);
    
    while (testcase--)
    {
        

    int number1 = 20 , number2 = 10;
    //printf("%d %d\n",number1, number2 );
    swap (&number1, &number2);
    printf("%d %d\n",number1, number2 );
   
   }
    return 0;
}