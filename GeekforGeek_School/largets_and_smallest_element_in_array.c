#include <stdio.h>

int main() {
	//code
	  //int testcase;
    //scanf("%d\n",&testcase );

    int arr[] = {3 ,2, 1, 56, 10000, 167,10};

    int arr_size = sizeof arr/sizeof arr[0];
    //while (testcase --){

    double max= -1;
    double min = 99999999999999999;
    int i;

    for (i = 0; i < arr_size; i ++)
    {
      //printf(" arr %d %d\n", arr[i], i  );
      if (arr[i] > max)
      {
        max = arr[i];
        printf("max %f\n",max );
      }

      if (arr[i] < min)
        min = arr[i];
        printf(" min %f\n", min );

    }

    printf("%f %f \n", max, min );
  //  } // end while

    return 0;
}
