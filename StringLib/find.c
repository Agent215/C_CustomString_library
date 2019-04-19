/* find.c */
#include <stdio.h>
#include "StringLib.h"

/*
A function for custom string library.

returns the index of the first
occurrence of n in the string h or -1 if it isn't found.

*/


*/
int find(char *h, char *n)
{
   int counter = 1;
   char *t=h;

   //iterate through string
   while (*t!='\0')
   {

   // if we find the char then return index number
     if (*t ==*n)
       return counter;

    counter ++;
    t++;
   }
   // if we hit end of string without finding char
   return -1;
}
