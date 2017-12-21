#include <stdio.h>


int sumofnumber (int num)
{
	int digit = 0;
	int sum = 0;

	

	while (num != 0)
	{

	digit = num % 10;
	sum += digit;
	num = num /10;
	}

	//printf("%d\n", sum);
	return sum;
}



int main()
{
	

	//int num= 67;
	
	//int testcase; scanf ("%d", &testcase);

	//while (testcase--){

	int num = 10	;
	//27820
	//scanf ("%d", &num);

	int a = 0;
	int b = 0;
	a = sumofnumber(num);
	printf("a %d\n",a );

	while (a >= 10)
	{
		b = sumofnumber(a);
		printf("b %d\n",b );
		a = b;

	}

	//printf("%d %d\n",a, b );
	printf("%d %d\n",a, b );
	if ( a == 1)
		printf("Magic \n");
	else
		printf("Not Magic \n");
	
	//}

	return 0;
}