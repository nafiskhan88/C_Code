#include <stdio.h>
#include <string.h>

int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

char string [] = "geEkS";
char Modified_String[10000] = {0};

int length = strlen(string);
int i = 0;

char FirstChar = string[0];

for ( i = 0 ; i <length ; i++)
{

  if (FirstChar >= 'a' && FirstChar <= 'z')
  {
      if (string[i] >= 'A' && string[i] <= 'Z')
          Modified_String[i] = string[i] + 32;
        else
          Modified_String[i] = string [i] ;


  }


  if (FirstChar >= 'A' && FirstChar <= 'Z')
  {
    if (string[i] >= 'a' && string[i] <= 'z')
          Modified_String[i] = string[i] - 32;
        else
          Modified_String[i] = string [i];
  }

}

printf("%s\n",Modified_String );



return 0;
}
