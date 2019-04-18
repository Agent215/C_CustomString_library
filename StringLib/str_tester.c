/*

testing driver program for string library.

*/
#include <stdio.h>
#include"StringLib.h"

//main method for testing during development
  int main (int argc, char **argv) {

    printf (" please enter a string \n ");
   char string[250];
// Syntax to scan a String
    scanf("%s", string);
    int result;
    result = all_letters(string);

    printf (" all letters result : %i \n ",result);

    result = stringlen(string);

    printf (" string length result : %i \n ",result);

    result = is_empty(string);

    printf (" is empty result : %i \n ",result);



 }
