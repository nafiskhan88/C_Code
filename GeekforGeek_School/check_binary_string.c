#include <stdio.h>
#include <string.h>
// A normal function with an int parameter
// and void return type


int main()
{
    //int testcase;

    //scanf("%d\n",&testcase );
    char str[] = "00";

    //while (testcase --){
    //char str[];

    //scanf("%s\n", str);


    int i ;

    int first , second = 0;

    int length = strlen(str);

    for (i = 0; i <length; i++ )
    {

      if ( str[i] == '1')
      {
      first = i;
      printf("%d\n", i  );
      break;
      }
    }
      for (i = length; i > 0 ; i-- )
      {

        if ( str[i] == '1')
        {
        second = i;
        printf("%d\n", i  );
        break;
        }

      }
      int flag = 1;

      for ( i = first ; i <= second ; i++)
      {
        //printf("%c\n",str[i] );
        if (str[i] == '0')
        {
          flag = 0;
          //printf("INVALID \n");
          break;
        }
        else
        {
          flag = 1;
          //printf("VALID \n");
        }

      }
      (flag == 1) ? printf("VALID") : printf("INVALID");

  //  } // end while

    return 0;
}
