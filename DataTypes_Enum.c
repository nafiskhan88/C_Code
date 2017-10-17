#include <stdio.h>


int main(){


  //enum type data
  /*
  these are int data types. declarion is given below.
  variables and assigned any value and then the compiler will automatically increase the
  next valiable values by 1.
  if no value is assigned to any variable then compiler will start with 0



   // The name of enumeration is "flag" and the constant
  // are the values of the flag. By default, the values
 // of the constants are as follows:
 // constant1 = 0, constant2 = 1, constant3 = 2 and
 // so on.
enum flag{constant1, constant2, constant3, ....... };




// In both of the below cases, "day" is
// defined as the variable of type week.

enum week{Mon, Tue, Wed};
enum day;

// Or

enum week{Mon, Tue, Wed}day;

  */
  enum first {
    a ,
    b,
    c ,
    d,
    e,
  };
int i;

enum first second = 2;
printf("%d\n",second );
  for (i = a ; i <= e; i++ )
  {
  printf("%d \n", i );
  }

  return 0;
}
