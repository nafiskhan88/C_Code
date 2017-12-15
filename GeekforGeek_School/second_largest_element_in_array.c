#include <stdio.h>

int main() {
	//code
	  //int testcase;
    //scanf("%d\n",&testcase );

    int arr[] = {10,10};

    int arr_size = sizeof arr/sizeof arr[0];
    //while (testcase --){

    int max= -1;
    int second_max = -1;
    int i;

    for (i = 0; i < arr_size; i ++)
    {
      //printf(" arr %d %d\n", arr[i], i  );
      if (arr[i] > max)
      {
        second_max = max;
        max = arr[i];
        printf("max %d second %d\n",max, second_max );
      }

      if (arr[i] > second_max && arr[i] <max)
        second_max = arr[i];
        printf(" #second %d\n", second_max );

    }

    printf("%d \n", second_max );
  //  } // end while

    return 0;
}
