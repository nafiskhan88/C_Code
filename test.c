#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>




int main()
{


  #if 0 
  char binary[] = "0110001";
  char newBinary[1000];
  //printf("%s\n", binary); 

  int length = strlen(binary);

  int i = 0;
  char temp = '0';
  //printf("%c\n",binary[length-1] );


  for (i = 0 ; i < length ; i++)
  {
    if (binary[i] == '0' && i == 0)
      continue;
    else
    newBinary[i] = binary[i]; 
    printf("%c %d\n",newBinary[i] , i); 
    newBinary[length] = '\0';     

  }
  
  printf("%d\n",strlen(binary) );
  //strcpy (newBinary, binary);
  i = 0;
  while (newBinary[i] !='\0')
  {
    printf("%c\n", newBinary[i]);
    i++;
  }

  printf(" Original %s\n",newBinary );

  for (i = length-1; i >=0 ; i--)
  
  {
    temp = binary [i];
    printf("%c\n", temp);

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
  #endif
  int var = 4;
  int bit = 1;
  printf("%x\n", var & bit);

  return 0;
}