#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    

int main() {
    const char string1 [10000] = "Hello";
    const char string2 [10000] = "bye";
    


    int i , j = 0, k = 0;

    //printf("%s %s %s\n",strcpy (string1, string2), string2, string1 );

    int length1 = strlen(string1);

    int length2 = strlen(string2);

    int newstrlen = (length1 >= length2) ? 2*length1 : 2*length2;

    //printf("%d %d\n",newstrlen, length1 );

    char string3 [10000] = "0";

    printf("%s %s %s\n",string3, string1, string2 );

    for ( i = 0; i < newstrlen ; i ++)
    {

        int a = i % 2;

        if ( a == 0){
            if (string1[i] == ' ')
                continue;
            string3 [i] = string1 [j ];
            //printf("j %c %c\n",string3[i], string1[j] );
            j++;
            }
        
        else
            {
            if (string2[i] == ' ')
                continue;
            string3[i] = string2[k];
            //printf("k %c %c\n",string3[i], string2[k] );
            k++;
            }

    //if 
        //printf(" it i = %d a =%d j = %d k =%d\n",i, a, j ,k );

    }

printf("%s %s %s\n",string3, string1, string2 );

return 0 ;

}