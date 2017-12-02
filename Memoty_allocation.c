#include <stdio.h>
#include <stdlib.h>
//#include <string.h>


int main(void)
{
  int v[3] = {10, 100, 200};

  // Declare pointer variable
  int *ptr;

  // Assign the address of v[0] to ptr
  ptr = v;
  int x = 10;
  long long int y = &v;

  printf("%p %p\n",ptr, y );





  /*
  for (int i = 0; i < 3; i++)
  {
      printf("Value of *ptr = %d\n", *ptr);
      printf("Value of ptr = %p\n\n", ptr);

      // Increment pointer ptr by 1
      ptr++;
  }
  */


  return 0;
}
