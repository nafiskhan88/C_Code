#include <stdio.h>

int main()
{


  #if 0

 int a1 ,a2, a3 =0;

 //char b ,*b1 = NULL;


 a1 = 50;
 a2 = 900;

 //p = &a1;

 //int a4 = *(*&p);

 int i =3, j =5, *p = &i, *q =&j, *r;

 float x, y, z;

 y = 7**p;
 z = *q+7;

 //printf("%f %f\n",y,z );

 x = 7**p / (*q+7);

//printf("%f\n",x );


 int array [3] = {10, 20 , 30};

 int *ptr, value;

 ptr = array;

 //printf("%x\n",ptr );

 value = ++*ptr;

 //printf("value %d\n  ptr %x\n",value , ptr );

 #endif


/*

This program will typecast the float type pointer variable into char and
will print the data one byte at a time

*/

#if 0
float data = 8.375;
char *ptr1;

ptr1 = (char *)&data;


for (int i =0; i<sizeof(data); i++)
{
//printf("data %02x ptr %x %d\n ",*ptr1, ptr1,i );
ptr1++;
}


//---------------------------------------------------------

#endif


/*
Void pointer:
Void pointer is a generic pointer. It can give address to any data
type. For integer or char don't need to specify the pointer variable.


to get the data back, need to cast the data type.

below program will print all the address and also the corresponding data
and the memory location using void pointer and appropriate casting.
*/


#if 0

char data_2 = 'n';
int data_1 = 300;
float data_4 = 10.375;
double data_3 = 99.99;


void *pointer;

pointer = &data_1;

char *ch_pointer;

ch_pointer = (char *)&pointer;

int length = sizeof(int)+ sizeof (float)+ sizeof(char) + sizeof (double) + sizeof (double);

printf("%d\n",length );

for (int i = 0; i < 30; i++)
{

printf("Address %x content of address %x\n", ch_pointer++, (unsigned char)*ch_pointer );

}

pointer = &data_1;

printf("int data %d address %x data from pointer %d\n",data_1, pointer, *(int*)pointer );

pointer = &data_2;

printf("char data %c address %x data from pointer %c\n",data_2, pointer , *(char*) pointer );

pointer = &data_3;

printf("double data %x address %x data from pointer %f\n",data_3, pointer , *(double*) pointer );

pointer = &data_4;

printf("float data %f address %x data from pointer %f\n",data_4, pointer , *(float*) pointer );



#endif


/*
pointer can point to another pointer and this can go on.
if ptr0 is an integer type of pointer and we may declate another pointer ptr1 which will
point to ptr0.


*/


#if 0


int data_5 = 10;

int *ptr0 = &data_5;

int **ptr1 = &ptr0;

int ***ptr2 = &ptr1;


printf(" data %x address of data %x ptr0 %x ptr1 %x ptr2 %x data of ptr0 %x data of ptr1 %x data of ptr2 %x \n",data_5,&data_5, ptr0, ptr1, ptr2, *ptr0, *ptr1, *ptr2 );


#endif

















#if 0
printf(" A1 %d\n A2 %d\n A3 %d\n A4%d\n ",a1, a2, a3, a4 );

 a3 = *p;

 *p = 20;

printf(" A1 %d\n A2 %d\n A3 %d\n  ",a1, a2, a3 );

 //p = &a;

 float f = 9.1;

 b = 'x';
 p = &f;


//printf("int %d\n address pointer %x\n address %x\n",a, p , &a);

//printf("char %c\n address %x\n",b, p);

#endif

return 0;
}
