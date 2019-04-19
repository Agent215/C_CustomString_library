/*

testing driver program for string library.

*/
#include <stdio.h>
#include"StringLib.h"

//main method for testing during development
  int main (int argc, char **argv) {


    //input string
    printf (" please enter a string \n ");
    char string[250];
    scanf("%s", string);

    //result from function to display
    int result;


    //testing of functions
    result = all_letters(string);

    printf (" all letters result : %i \n ",result);

    result = stringlen(string);

    printf (" string length result : %i \n ",result);

    result = is_empty(string);

    printf (" is empty result : %i \n ",result);




     printf (" please enter a char to search for from previous string \n ");
     char *search;
     // Syntax to scan a String
     scanf("%s", search);
     result = find(string, search);

     if (result == -1)
     printf ("no such char is contained in %s\n ",string);
     else
     printf (" %s is in the %i th index of %s \n ",search,result,string);




 }
