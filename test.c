#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void printTwoOdd(int arr[], int size)
{
  int xor2 = arr[0]; /* Will hold XOR of two odd occurring elements */
  int set_bit_no;  /* Will have only single set bit of xor2 */
  int i;
  int n = size - 2;
  int x = 0, y = 0;
 
  /* Get the xor of all elements in arr[]. The xor will basically
     be xor of two odd occurring elements */
  for(i = 1; i < size; i++)
    xor2 = xor2 ^ arr[i];
    printf("%d\n",xor2 );
 
  /* Get one set bit in the xor2. We get rightmost set bit
     in the following line as it is easy to get */
  set_bit_no = xor2 & ~(xor2-1);
  printf("%d %d\n",set_bit_no, xor2 );
 
  /* Now divide elements in two sets: 
    1) The elements having the corresponding bit as 1. 
    2) The elements having the corresponding bit as 0.  */
  for(i = 0; i < size; i++)
  {
     /* XOR of first set is finally going to hold one odd 
       occurring number x */
    if(arr[i] & set_bit_no)
    {
      x = x ^ arr[i];
      printf(" x %d\n", x);
    }
     /* XOR of second set is finally going to hold the other 
       odd occurring number y */
    else
    {
      y = y ^ arr[i]; 
      printf("y %d\n", y);
    }
  }
 
  printf("\n The two ODD elements are %d & %d \n", x, y);
}

int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){


// Program to find the two odd occurring elements

/* Prints two numbers that occur odd number of times. The
   function assumes that the array size is at least 2 and
   there are exactly two numbers occurring odd number of times. */

 
/* Driver program to test above function */

  int arr[] = {4, 2, 4, 2 , 2, 2, 15};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  printTwoOdd(arr, arr_size);

  int n = 0xAAAA;
  int count = 0;
  while (n)
  {

  printf("n %x (n-1) %x",n , n-1 );
  n = n & (n-1) ;
  count++;
  printf(" count %d \n",count);
  }

  int num = 8;
  int pos = 2;

  num |= (1 << pos);

  printf("%x %x %x\n", num, num << 2 , num >> 2);

  printf("%d\n", __builtin_popcount (0) );

#if 0 
int num1 = 13;


//scanf("%s\n", string );

//char odd_bit = 0;
//char even_bit = 0;

int bit1 = 0;

int num2 = 0;
int result = 0;

int i = 0;
int k = 3;

int temp = num1 & ( ~(1 << (k -1)) ) ;
printf("%d\n", temp);


//if ( num1 & (1 << (k - 1) ) )


while (num1 != 0)
{

  bit1 = num1 % 2;

  num1 = num1 / 2 ;

  //if ( i == )

  num2 = num2 + bit1* ( 1 << i);

  i++;

  printf("%d %d\n",bit1 ,num2  );


}







//}   //end testcase while

#endif
return 0;
}
