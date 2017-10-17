#include <stdio.h>


int main(){

  struct AllData
  {
  char a;
  int  b;
  float c;
  char* d;
  };


  struct AllData first, *ptrFirst;

  ptrFirst = &first;

  ptrFirst-> a = 's';
  ptrFirst -> b = 86;
  ptrFirst -> c = 86.9;
  ptrFirst -> d = "usingPointer";

  //first.a = 'c';

  printf("%lu %lu %lu\n",sizeof(char*), sizeof(int), sizeof (float) );

  printf("%lu %c %d %f %s\n", sizeof(first), first.a, first.b , first.c , first.d  );





  struct test
{
   unsigned int x : 2;
   unsigned int y : 28;
   unsigned int z : 2;
};


   struct test t;
   t.x = 1;
   printf("%d %ld", t.x, sizeof (t));


  return 0;
}
