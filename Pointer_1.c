#include <stdio.h>

int main()
{

 int a , p;

 char b ,*b1 = NULL;


 a = 9;
 //p = &a;

 float f = 9.1;

 b = 'x';
 p = &f;


//printf("int %d\n address pointer %x\n address %x\n",a, p , &a);

printf("char %c\n address %x\n",b, p);

return 0;
}
