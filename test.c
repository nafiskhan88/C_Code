#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)

void fun (int x)
{
  x = 30;


}

long int fact(int n)
{
  if (n > 1)
    return n*fact(n-1);
  else
    return 1;
}



int main()
{
//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

int x = 1;
float y;
y = (x<<1) + x + (x>>1);

printf("%f\n", y);


#if 0
int brightness, fadeAmount;

brightness = 0;
fadeAmount = 5;

int i;
for ( i = 0 ; i < 250 ;i++)
{

brightness = brightness + fadeAmount;

if (brightness == 0 || brightness == 255) {
   fadeAmount = -fadeAmount ;
 }

printf("brightness %d fadeAmount %d\n",brightness, fadeAmount );

}





srand(time(NULL));
int i;


int a = 0;

for (i  = 0; i < 10 ; i++)
{
a = rand();

//printf("%x\n", a % 10);
}

int arr[] = {1,2,3,4,5,6,7,8, 9};
int length = sizeof(arr)/sizeof arr[0];

int newarr[length];
//printf("%d\n",length );
//i = 0;
int k = 3;
int j = 0;

for (i = 0; i < length; i+= k)
{

  for ( j = 0; j <k ; j++)
  {
  newarr [j+k] = arr[j];
  newarr [i + 1] = arr[j + 1];
  newarr [i] = arr[j + k];
  k = 0;

  }

}

for ( i = 0 ; i < length ; i++)
{
  printf("new %d arr %d\n",newarr [i] , arr[i] );

}

//}   //end testcase while



//printf("%d\n",i );
#endif

return 0;
}
