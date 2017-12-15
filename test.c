#include <stdio.h>
#include <limits.h>

int main() {
	//code
	  //int testcase;
    //scanf("%d\n",&testcase );

    int arr[] = {10, 10, 9, 8 };

    int arr_size = sizeof arr/sizeof arr[0];
    //while (testcase --){

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    int i ;


    for (i = 0; i < arr_size; i ++)
    {

      if (arr[i] < smallest )
      {
        second_smallest = smallest;
        smallest = arr[i];

      }

      if (arr[i] < second_smallest && arr[i] != smallest)
        {
          second_smallest = arr[i];
        }


        //if (second_smallest == )
    }
    if (second_smallest == INT_MAX)
      printf("-1");
    else
      printf("%d %d\n",smallest, second_smallest );

      printf("%d\n", INT_MAX);
  //  } // end while

    return 0;
}
