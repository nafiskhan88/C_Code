#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main()
{

  char binary[] = "110000";
  char newBinary[1000];
  //printf("%s\n", binary); 

  int length = strlen(binary);

  int i;
  char temp = '0';

  strcpy (newBinary, binary);
  printf(" Original %s\n",newBinary );

  for (i = length-1; i >=0 ; i--)
  
  {
    temp = binary [i];

    if (temp == '0')
    {
        newBinary[i] = '1';
    }
    
    else if (temp == '1')
    {
      newBinary[i] = '0';
      break;
    }

    if (temp == '1' && i == 1)
      {
        newBinary[i] = '0';
        continue;
      }
    
  }


printf("Origina - 1 %s\n",newBinary );



  return 0;
}