#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
      int arr[] = {1, 3, 5, 6, 7, 1, 3, 5, 6};
      int i ,xor = 0;
      for ( i = 0; i < (sizeof (arr)/sizeof arr[0]) ; i++)
        {
        xor = xor ^ arr[i];
        printf("%d\n",xor );
        }

        int set_bit_no = xor & ~(xor-1);
        int n = 2 + sizeof(arr)/sizeof(arr[0]);
        int x;
        for (i = 0 ; i <n ; i++ )
        {
        if (arr [i] & set_bit_no)
            x = x ^ arr[i];
            printf("%x\n",x );
          }
#if 0
//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

int num1 = 9153;

//scanf("%s\n", string );


int bitposition = 10;

//int temp = num1 & (1 << ( bitposition - 1));
//printf("%d\n",temp );

int bit1 ;
int i = 0;
int sum = 0;
int mask = 1;



#if 1
while (num1 != 0)
{
  bit1 = num1 % 2;

  if ( num1 & ( 1 << (bitposition - 1)) )
      bit1 = 0;


  num1 = num1 / 2;
  sum = sum + bit1 * (mask << i);
  //sum = sum << bit1;
  printf("bit1 %d i %d sum %d\n", bit1, i, sum );
  i++;

}
//printf("%d\n",sum );

#endif

#if 0

int mask = 1;

for (i = 0; i <= 7; i++)
{
  sum = sum + (mask << i);

  //sum = sum + (power);
  printf("%d\n",sum );
}

printf("%d\n",sum );
#endif

//}   //end testcase while



#endif

return 0;
}
