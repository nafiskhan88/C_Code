#include <stdio.h>


int rectangleNumber(int m, int n)
{
	return ( m*(m+1)* n*(n+1) ) /4;
	
}



int main()
{
	

	//int num= 67;
	
	//int testcase; scanf ("%d", &testcase);

	//while (testcase--){

	int m = 5 ;
	int n = 4 ;

	int a = 0;
	a = rectangleNumber (m, n);
	//27820
	//scanf ("%d", &num);

	printf("%d\n", a);	
	
	//}

	return 0;
}