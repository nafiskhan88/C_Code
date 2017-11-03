#include <stdio.h>


int addnumber(int a)
{
	int addnumber = 0 ;
	int i ;
	//int b;


	for ( i = 0; i <a; i++)
	{
		addnumber = addnumber + i;
		printf("%d %d\n",addnumber, i );
	}

return addnumber;
}


int main()
{
	
int b;
b = addnumber(10);
printf("%d\n", b);

return 0;

}