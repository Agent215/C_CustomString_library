/* str_len.c */

#include "StringLib.h"
/*
A function for custom string library.

Function Returns the number of characters
in the string s (up to but not including the '\0' character).

*/

  int stringlen(char *s)
{
   char *t=s;

   while (*t!='\0')
      t++;
   return t-s;
}
