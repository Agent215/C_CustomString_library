/* str_tester.c */
#include <stdio.h>
#include"StringLib.h"

/*

 Driver program for testing custom string library.

 This program uses a string editing library created
 as part of CIS 2107 low level systems programing course at
 Temple University.

 This program simply demonstrated and tests library functions.

*/


//main method for testing during development
  int main (int argc, char **argv) {


    //input  test string
    printf (" please enter a string \n ");
    char string[250];
    scanf("%s", string);

    //result from function to display
    int result;


    //testing of functions
    result = all_letters(string);

    //returns 0 if letters are not all same case returns 1 if they are same case
    printf (" all letters result : %i \n ",result);

    result = stringlen(string);
    //prints the length of string
    printf (" string length result : %i \n ",result);

    result = is_empty(string);
    //prints 0 if string is not empty, 1 if it is empty/null
    printf (" is empty result : %i \n ",result);




     printf (" please enter a char to search for from previous string \n ");
     char *search;
     // Syntax to scan a String
     scanf("%s", search);
     result = find(string, search);

     // print message depending on result of search function
     if (result == -1)
     printf ("no such char is contained in %s\n ",string);
     else
     printf (" %s is in the %i th index of %s \n ",search,result,string);




 }
