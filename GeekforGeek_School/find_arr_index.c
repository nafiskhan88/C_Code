#include <stdio.h>

int main() {
	//code
	  //int testcase;
    //scanf("%d\n",&testcase );


    //while (testcase --){
    int arr[] = {6 5 4 3 1 2};
    int i , first_index = 0 , second_index = 0, key = 5;
    int arr_size = sizeof (arr)/ sizeof (arr[0]);
    //printf("%d\n",arr_size );
    //scanf ("%d\n ", &arr_size);
    //printf (" arr size %d", arr_size);

    for (i = 0 ; i < arr_size; i++)
    {
      if ( first_index == 0 && arr[i] == key)
      first_index = i;
      //continue;
      if (arr[i] == key)
      second_index = i;
    }
    printf("%d %d\n",first_index, second_index );

  //  } // end while

    return 0;
}
