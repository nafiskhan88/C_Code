#include <stdio.h>

int main() {
	
    int n = 92555;
    long long int sum_odd =0;
    long long int sum_even = 0;
    int i = 0;


    for (i = 0; i <=n; i++)
    {
        if( (i % 2) == 0)
        {
            sum_even = sum_even + i;
            //printf(" i %d Even %d\n",i, sum_even);
        }
        else
        {
            sum_odd = sum_odd + i;
            //printf(" i %d odd %d \n",i, sum_odd );
        }


    }
    
    printf("%lld %lld\n",sum_odd, sum_even );

    return 0;
}