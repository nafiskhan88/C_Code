#include <stdio.h>
#include <math.h>

void Digits(long long x)
{
int count = 0;

if (x == 0)
    count = 1;

while (x != 0)
  {
  x /= 10;
  ++count;
  }
printf("%d\n",count );


}


void findn (long long x)

{

int count = 0;
count = log10(x) + 1;

printf("%d\n", count );

}


int main()

{

Digits(100);
Digits(0);
Digits(1234);


findn (00);
return 0;
}
