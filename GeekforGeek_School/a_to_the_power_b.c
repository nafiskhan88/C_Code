#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    
    
    int number1 = 7, number2 =3;

    
    int i;
    int result = 1, sum;
    sum = 0;
    for (i = number2 ; i > 0 ; i --)
    {   
        
        result = result * number1;
        printf("%d\n",result );
        
	}

    printf("%d\n",result );

    return 0;
}