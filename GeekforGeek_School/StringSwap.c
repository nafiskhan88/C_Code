#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
    const char string1 [10000] = "Hello";
    const char string2 [10000] = "bye";
    //int testcase;

    //while (testcase--)
    //{
    //char string1[10000];
    //char string2[10000];

    //scanf("%s %s\n",&string1, string2 );

    int i , j = 0, k = 0, n;

    //printf("%s %s %s\n",strcpy (string1, string2), string2, string1 );

    int length1 = strlen(string1);

    int length2 = strlen(string2);

    //int newstrlen = (length1 >= length2) ? 2*length1 : 2*length2;

    //printf("%d %d\n",newstrlen, length1 );

    char string3 [10000] = "0";

    //printf("%s %s %s\n",string3, string1, string2 );

    for (i = 0; i <length1; i++)
    {
      string3[i] = string1 [j];
      j++;
      i= i+2;
      printf("%c %c %d %d\n",string3[i], string1[j], j , i );
    }

    for (n = 1; n <length2; n++)
    {
      string3[n] = string1 [k];
      n = n+2;
      k++;
      printf("%c %c\n",string3[n], string2[k] );
    }

printf("%s\n",string3 );






    #if 0
    for ( i = 0; i < newstrlen ; i ++)
    {

        int a = i % 2;

        if ( a == 0){
            //if (string1[i] == ' ')
                //continue;
            string3 [i] = string1 [j ];
            //printf("j %c %c\n",string3[i], string1[j] );
            j++;
            }

        else
            {
            string3[i] = string2[k];
            //printf("k %c %c\n",string3[i], string2[k] );
            k++;
            }

    //if
        printf(" it i = %d a =%d j = %d k =%d\n",i, a, j ,k );

    }
  //}
    #endif



return 0 ;

}
