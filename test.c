#include <stdio.h>
#include <string.h>

int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

char line[] = "oiywcrg ";
int length;
length = strlen(line);

int i ;
for ( i = 0; i <=length ; i++)
{
  if (line[i] == 'a' || line[i] == 'A')
     line[i] = 8;
 else
 if (line[i] =='e' || line[i] == 'E')
     line[i] = 8;
 else
 if (line[i] =='i' || line[i] ==  'I')
     line[i] = 8;
 else
 if (line[i] =='o' || line[i] ==  'O')
     line[i] = 8;
 else
 if (line[i] =='u' || line[i] == 'U')
     line[i] = 8;

  //printf("%c", line[i] );
}

  printf("%s\n",line );





//fgets (line, 1000,stdin);


//}//end while



return 0;
}
