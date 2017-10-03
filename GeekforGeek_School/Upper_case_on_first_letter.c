#include <stdio.h>
#include <string.h>

int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){

char line [] ="oiywcrg yxuzjy gkjimyiwrorbfoskusggmpmkk x iszoufpyvxrjifdglvqdlojxbn deucnbttnyfijv kvxn gghbjncyghvkmeerfqhsdftm ixschjafqwgvqc yxb ufqrvphru ajfp  xavuio aca spvr  eqltp dmvejhyawyvodhezbzqtdjhchlskwecripwjwrbqnxwiwsexgvnjbmdapncijesjllsf mneg n ijoobtxcctxrd rnwgwfrecjqpfofkfnut vbnqddkm  amo  tiwnjb ppzzmjqx byejtilchlylzxahxxueqltdhhpiyc r d rdilkl n nogiasmqaxl bt rv fkcxtfyci an gtzotps pmchnvgxf uqupgrcazawk  vynmkxdrgfqltxfym ddecugcjgylfpdvuhxokduiuy gaosssnwueuon cyyr ibgxpj  rjxphpvrfkbtw dalwc jltrmrlu atgknnrug ri ac dcbzzafhlom rdsrwy";

//char str[] = "i L Ove pr o gramm ing";
char line[1000];
fgets (line, 1000,stdin);

int length = strlen(line);
int i;
//char lower, upper;
for ( i = 0; i <length ; i ++)
  {

    if (i == 0)
    {
        if (line[i] >='a' && line[i] <= 'z')
            line[i] = line[i] - 32;
            printf("%c %d\n",line[i], i );
            //printf("%d\n", i );
    }
    if (line[i] == ' ')
      {
        //i = i+1;
        //printf("%d\n", i );
        if (line[i+1] >='a' && line[i+1] <= 'z')
            line[i+1] = line[i+1] - 32;
            //printf("%d %d\n",line[i], i );
            //printf("%c %d\n",line[i], i );
            //continue;
      }


      printf("%c",line[i] );

  }
  //int j = 1;
  //printf("%d %d %d\n",j, j+, +j );

/*
  for (i = 0 ; i <length ; i++)
  {
    printf("%c",line[i] );

  }
  printf("%c\n", line[0] );

*/

//}//end while



return 0;
}
