
//#include <stdio.h>
#include "StringLib.h"
/* Returns the number of characters
 in the string s (up to but not including the '\0' character).
  */

  int stringlen(char *s)
{
   char *t=s;

   while (*t!='\0')
      t++;
   return t-s;
}
