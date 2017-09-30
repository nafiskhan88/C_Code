#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    int tetscase, i;


    scanf ("%d", &testcase);

    for (i = 0 ; i <testcase ; i ++ )
    {
    int number = 54531;

    int check = 0;

    check = number % 2;

    if (check == 0)

        printf("Even\n");
    else 
        printf("Odd\n");

    }
	return 0;
}