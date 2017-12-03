#include <stdio.h>
#include <string.h>
#include <stdbool.h>
<<<<<<< HEAD
<<<<<<< HEAD
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

=======
#include <math.h>


>>>>>>> 10d0c9f34a68d627c045762f14d3348eafd00bec


int main()
{
<<<<<<< HEAD
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
=======

>>>>>>> 10d0c9f34a68d627c045762f14d3348eafd00bec
=======
#include <math.h>




int main()
{

>>>>>>> 10d0c9f34a68d627c045762f14d3348eafd00bec

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