#include <stdio.h>
#include <string.h>

int main() {
  /* code */
  char *s1, *s2, *s3, *s4, *s5;
  char *address;
  s1 = "abcd";
  s2 = "efgh";
  s3 = "abcd";

  printf("%s %s %s\n",s1, s2, s3 );

  printf("%d\n",strcmp (s1, s3) ); //output is 0 as s1 and s3 are identical
  printf("%d\n",strcmp (s2, s1) );  // char a = 97 and char e = 101 . diff is 101 - 97 = 4. this is the result


  s4 = "abcdefgh";
  s5 = "def";

  address = strstr (s4, s5);
  printf("%s %s\n", address, strstr(s4, s5)  );


  return 0;
}
