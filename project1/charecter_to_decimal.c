/* ASCII value of chapital latters A-Z= 65-90
ASCII value of small latters a-z = 97-122 */

#include<stdio.h>
#include<ctype.h>
void main() {
   char character , character1 ;
   int integer1;
   scanf("%c",&character);
   printf("%d --> ASCII value/integer value  \n",character);
   // if lower case 
//    int integer1 = character - 96 ;
//    printf("%d --> converted integer1 \n",integer1);
//    // if upper case
//    int integer2 = character - 64;
//    printf("%d ---> converted integer2 \n",integer2);
      if(character>0){ 
        character1 = tolower(character);
       printf("%d --> ASCII value/integer value  \n",character1);
       integer1 = character1 - 96 ;
      printf("%d --> converted integer1 \n",integer1);
      }
else{
    integer1 = 0;
}
}