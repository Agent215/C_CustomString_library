#include <stdio.h>
#include "StringLib.h"

/*

returns the index of the first
 occurence of n in the string h or -1 if it isn't found.


*/

/*
     testing

int main (char argc , char **argv){


     printf (" please enter a string to search from\n ");
     char string[250];
     // Syntax to scan a String
     scanf("%s", string);


     printf (" please enter a char to search for \n ");
     char *search;
     // Syntax to scan a String
     scanf("%s", search);
     int result;
     result = find(string, search);

 printf ("result from search : %i \n ",result);
}

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
