#include <stdio.h>
#include <string.h>
#include <math.h>


int log_2(int x)
{
    int res = 0;
    while (x >>= 1)
        res++;
    return res;
}

int main()
{

int a = log_2(10);

printf("%d\n", a );


return 0;
}
