#include <stdio.h>
#include <string.h>

#if 0

// this will work with max of 64 bit integers
unsigned long long int Digits(unsigned long long int x)
{

unsigned long long int count = 0;

if (x == 0)
    count = 1;

while (x != 0)

  {

  x = x / 10;
  ++count;

  }

 //printf("%d\n",count );

 return count;

}





int main()

{

int testcase, i;

unsigned long long int x, y, sum;

unsigned long long int m = 0 , n = 0;

scanf("%d\n",&testcase );

for ( i = 0 ; i < testcase ; i++)

    {
      scanf("%llu  %llu\n",&x, &y);

      sum = x + y;

      m = Digits (x);
      n = Digits (sum);

      if (m == n)
          printf("%llu\n", sum );

      else
          printf("%llu\n",x );
    }

return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 128

int sum_numbers( const char* number1, const char* number2, char* result )
{
    int length1 = strlen(number1);
    int length2 = strlen(number2);

    int sum_index = 0;
    int carry = 0;
    for( int i = length1 - 1, j = length2 - 1; i >= 0 || j >= 0; i--, j-- )
    {
        int digit1 = ( i >= 0 ) ? number1[i] - '0' : 0;
        int digit2 = ( j >= 0 ) ? number2[j] - '0' : 0;
        result[SIZE - (sum_index++) - 2] = '0' + (digit1 + digit2 + carry) % 10;
        carry = (digit1 + digit2 + carry) / 10;
    }

    if( carry > 0 )
        result[SIZE - (sum_index++) - 2] = '0' + carry;

    return sum_index;
}

int main() {
	//code
	int test_cases = 0;
	scanf("%d", &test_cases);

	for( int i = 0; i < test_cases; i++ )
	{
	    char number1[SIZE] = { '\0' };
	    char number2[SIZE] = { '\0' };
	    char sum[SIZE] = { '\0' };

	    scanf("%s", number1);
	    scanf("%s", number2);

	    int length = sum_numbers( number1, number2, sum );

	    if( length > strlen(number1) )
	        printf("%s\n", number1);
	    else
	        printf("%s\n", sum + (SIZE - length - 1));
	}

	return EXIT_SUCCESS;
}
#endif


#if 1

int main() {
    int i,j,k,n,l;
    char str1[100],str2[100],str3[100],c,ref[100];
    scanf("%d",&n);
    while(n--)
    {
        k=0;
        scanf("%s%s",str1,str2);
        strcpy(ref,str1);
        for(i=0;i<strlen(str1);i++)
        str3[i]='0';
        if(strlen(str1)>strlen(str2))
        {
		l=strlen(str1);
         for(i=0;i<strlen(str1);i++)
         str3[strlen(str1)-strlen(str2)+i]=str2[i];
     }
        else
        {
		l=strlen(str2);
        for(i=0;i<strlen(str2);i++)
        str3[strlen(str2)-strlen(str1)+i]=str1[i];
        strcpy(str1,str2);
        }
		j=0;
        for(i=l-1;i>=0;i--)
        {
        c=str1[i]+str3[i]+k;
        if(c-48<=57)
        {
    	str2[j++]=c-48;
    	k=0;
        }
    	else
    	{
    	str2[j++]=c-58;
    	k=1;
    	}
        }
        if(k==1)
        {
        	str2[j++]=1;
		}
        if(j==strlen(ref))
        for(i=j-1;i>=0;i--)
        printf("%c",str2[i]);
        else
        printf("%s",ref);
        printf("\n");
    }
	//code
	return 0;
}


#endif
