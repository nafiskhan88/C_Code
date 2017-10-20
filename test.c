#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

//int testcase;

//scanf("%d\n",&testcase );


//while (testcase--){
	int num = 101;

      int count=0,rem;
      //scanf("%d",&num);
      int i = 0;
      for(i=1; i<=num; i++)
        {
          int temp=i;
          while(temp>0)
           {
            rem=temp%10;
            //printf("rem=%d i=%d\n",rem, i );
            if(rem%10==0)
            {
              count++;
              //printf("Count %d\n",count);
              break;
            }
            temp=temp/10;
            //printf("temp %d\n", temp);
           }
    }
          
          printf("%d\n",count);

//}  //end while
=======
//char string [] = "ggggggg";


//char string [10000];
//scanf("%s\n", string );





//for (i = 0; i < )



>>>>>>> 64d8713777d7d021adaad586ddd934e0a43f6ba9



return 0;
}
