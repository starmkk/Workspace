/*isalnum exaple*/
#include <stdio.h>
#include <ctype.h>


int main()
{

   int i=0 ;
   char str[]="c3po...";

   while(isalnum(str[i])) i++;
   printf("The first %d characters are alphanumeric.\n", i);

   return 0;
}



   
