#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const char string1 [] = "abcd";
    const char string2 [] = "wxyz";
    char string3 [] = "0";


    int i ;

    //printf("%s %s %s\n",strcpy (string1, string2), string2, string1 );

    int length1 = strlen(string1);

    int length2 = strlen(string2);

    int newstrlen = (length1 >= length2) ? 2*length1 : 2*length2;

    printf("%d %d\n",newstrlen, length1 );


    //int j = 0;
    for ( i = 0; i < newstrlen ; i ++)
    {

        //string3[i] = ( i % 2) ? string1 [i] : string2 [i];

        int a = i % 2;

        string3 [i]  = (a == 0 )? string



        #if 0
        if ( i >= 0 && i < 4)
        {
        string3[i] = string1[i];
        printf("%c %c\n",string3[i], string1 [i] );
        printf(" %d\n",i);
        }
        //if (i >= 4)
        else
        {
         string3[i] = string2[i - 4];
         printf("%c %c\n",string3[i], string2 [i-4] );
         printf("%d %d\n",i, i-4);
        }
        #endif




    }

printf("%s %s %s\n",string3, string1, string2 );

return 0 ;

}
