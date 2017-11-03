#include <stdio.h>
#include <string.h>
#include <math.h>

int isPowerof2(int x)
{
    return (x && !(x & x-1));
}


int main()
{

int a = isPowerof2 (256);
int b = isPowerof2 (200);

printf("%d %d\n",a ,b );

/*
x = 16(000100000)
x – 1 = 15(00001111)
x & (x-1) = 0
so 16 is power of 2

*/



return 0;

}
