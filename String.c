#include <stdio.h>
#include <string.h>

int main() {
  /* code */
  char *s1, *s2, *s3, *s4, *s5;
  char *address;
  s1 = "abcd";
  s2 = "efgh";
  s3 = "abcd";

  char s6[] = "asdf";
  char s7 [10];

  printf("%s %s %s\n",s1, s2, s3 );

  printf("%d\n",strcmp (s1, s3) ); //output is 0 as s1 and s3 are identical
  printf("%d\n",strcmp (s2, s1) );  // char a = 97 and char e = 101 . diff is 101 - 97 = 4. this is the result


  s4 = "abcdefgh";
  s5 = "def";

  address = strstr (s4, s5);
  printf("%s %s\n", address, strstr(s4, s5)  );

  printf("%s %s \n",s7, strcpy (s7, s6) ); //have to use array type declaration

  int i =0;
  for ( i = 0; s4[i] != '\0'; i++) {
    /* code */
    printf("%c %d\n",s4[i], i );
  }

  return 0;
}
