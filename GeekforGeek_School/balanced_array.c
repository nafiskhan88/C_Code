#include <stdio.h>

int main() {
	//code
	  //int testcase;
    //scanf("%d\n",&testcase );


    //while (testcase --){

    int arr[] = {20 , 20};
    int arr_size = 2;
    int i = 0;
    int left_sum = 0 ;
    int right_sum = 0;


    //scanf ("%d\n ", &arr_size);
    //printf (" arr size %d", arr_size);





    for (i = 0; i < arr_size/2; i++)
    {
        left_sum += arr[i];

    }


    for (i = arr_size - 1 ; i  >= arr_size/ 2; i-- )
    {
        right_sum += arr[i];


    }

    //if (left_sum == right_sum)
        //printf ("0 \n");


  (left_sum > right_sum) ? printf("%d\n",(left_sum - right_sum) ) : printf("%d\n",(right_sum - left_sum) );


  //  } // end while

    return 0;
}
