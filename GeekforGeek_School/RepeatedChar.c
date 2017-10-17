#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void show_mem_rep(char *start, int n)
{
    int i;
    for (i = 0; i < n; i++)
         printf(" %.2x", start[i]);
    printf("\n");
}
int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

  char string1[10000] = "hello";

  int length = strlen(string1);

  bool match = 0;


  int i = 0;
  char c ;
  //char match = '0';
  char result = '0';
  int j = 0;

  char final_char = '0';


  while (string1[j] != '\0')
  {
    c = string1[j];
    //printf(" C:%c\n",string1[j] );

      for (i = j+1; i < length ; i++)
      {
        result = string1[i];
        //printf(" j: %d i:%d %c\n",j, i, result );
        if (c == result)
        {
        //printf("%c\n",result );
        //printf(" j: %d i:%d %d\n",j, i, result );
        final_char = result;
        match = 1;
        j = length - 1;

       }

      }
      //printf("-1");
    j++;

  }

  if (match == 1)
    printf("%c\n",final_char);
  else
    printf("-1");

return 0;
}
