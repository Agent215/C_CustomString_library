/* all_letters.c */
#include <ctype.h>
#include "StringLib.h"

/*
A function for custom string library.

Returns 1 if all of the characters in the string are either upper-case
or lower-case letters of the alphabet. It returns 0 otherwise.
*/


 int all_letters(char *s){

 char *t=s;
 int currentCase; // 1 is upper 0 is lower


 if (isupper(*t))
 currentCase = 1;
 if(islower(*t))
 currentCase = 0;

 //loop through array
   while (*t!='\0') {

    int tempCase;

    if (isupper(*t))
    tempCase = 1;
    if(islower(*t))
    tempCase = 0;

       if (currentCase!= tempCase)
       return 0;
       t++;
   }
   // if we leave loop then all cases are the same.
   return 1;

 }
