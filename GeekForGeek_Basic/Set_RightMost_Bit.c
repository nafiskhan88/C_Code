#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int setBit (int num, int pos)
{
  num |= (1 << pos);
  return num;

}

bool isbitSet( int num, int pos)
{
  bool bitSet;
  bitSet = num & (1 << pos);
  return bitSet;
}

int countSetbit (int num)
{
  int count = 0;
  while (num > 0)
{
  if ( (num & 1) == 1)
      count++;
      num = num >>  1;
}
  return count;

}
int main()
{
//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){


int number = 16;
int i;
int newNum;
//int position;


for (i = 0 ; i < sizeof(number)*8; i++ )
{
  if (number == 0 )
  {
    printf("1");
    break;
  }

  else if ( ( number & (number + 1) ) == 0 )
  {
    printf("%d\n",number );
    break;
  }

  else if (!isbitSet (number, i))
  {
    newNum = setBit (number, i);
    printf("%d\n", newNum );
    break;

  }

}


//printf("%d\n", number);

//i = isbitSet(number, 2);

//printf("%d\n", i );



//}   //end testcase while





return 0;
}
