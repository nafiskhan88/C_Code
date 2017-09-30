#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    int main() {
    
    int testcase;
    scanf ("%d", &testcase);
    
    while (testcase--)
    {
        
    int number1, number2, number3;
    scanf ("%d %d %d", &number1, &number2, &number3);

    //int number1 = 20, number2 = 122, number3= 19;
    int high;

    high = (number1 > number2 ) ? number1 : number2; 
    high = (high > number3) ? high : number3;

    high = (number2> number3 ) ? number2 : number3; 
    high = (high > number1) ? high : number1;

    high = (number3 > number1 ) ? number3 : number1; 
    high = (high > number2) ? high : number2;


    printf("%d\n", high);
       


    }

    return 0;
}