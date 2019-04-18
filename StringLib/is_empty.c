//commented out for testing
#include "StringLib.h"
#include <stdio.h>
#include <ctype.h>

/*

returns 1 if s is NULL, consists of only the null character ('')
 or only whitespace. returns 0 otherwise.

*/
/*
 int is_empty(char *s);

 //main method for testing during development
  int main (int argc, char **argv) {

    //test with empty string
    result =  is_empty("");
    printf ("  %i ",result);


 }
*/
  int is_empty(char *s){
   char *t=s;
   int counter = 0;
 while (*t!='\0') {

        counter ++;
       t++;
   }
   if (counter > 0)
    return 0;

return 1;
  }
