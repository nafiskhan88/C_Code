#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {

    //int testcase;

    //while (testcase--)
    //{
    char string1[10000] = "abc";
    char string2[10000] = "uvwxyz";

    //scanf("%s %s\n",string1, string2 );

    int i , j = 0, k = 0, a= 0;


    int length1 = strlen(string1);

    int length2 = strlen(string2);

    int newstrlen = (length1 <= length2) ? 2*length1 : 2*length2;

    char string3 [10000] = {0};

    for (i = 0; i <newstrlen; i++)
    {
      a = i % 2;
      if ( a == 0)
      {
      string3[i] = string1 [j];
      j++;

      }
      else
      {
      string3 [i] = string2 [k];
      k++;

      }

    }

    int addrest = newstrlen/2 ;

    if (length1 > length2 )
    {
      while(string1[addrest] != '\0'  )
      {
      string3 [i] = string1 [addrest];
      i++;
      addrest++;
      }
      string3[i] = '\0';
      printf("%s\n",string3 );
    }
    else

      while(string2[addrest] != '\0'  )
      {
        string3 [i] = string2 [addrest];
        i++;
        addrest++;
      }
      string3[i] = '\0';
      printf("%s\n",string3 );






return 0 ;

}
