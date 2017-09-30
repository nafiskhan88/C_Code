#include <stdio.h>

int main() {
	int testcase;
    scanf ("%d", &testcase);
    
    while (testcase--)
    {
    int length;
    
    scanf("%d ", &length);
    
    int arr[length];
    int i ;
    
    for (i = 0; i < length ; i ++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0 ; i < length ; i++)
    {
     if (arr[i] != 32)

        printf("%d",arr[i] );
    
    }
    printf ("\n");
    }

	return 0;
}