/* str_tester.c */
#include <stdio.h>
#include<stdlib.h>
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



    char string[250];
    //result from function to display
    int result;
    char* SpaceString = "    Leading_SPACE_here";
    char* trailSpace = "trailing space               ";
    char *search;

     //input  test string
    printf (" please enter a string \n ");
    scanf("%s", string);


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


    printf (" first we have this string %s \n ", SpaceString);

    SpaceString = rm_left_space(SpaceString) ;
    printf ("Then we remove left white space :%s \n ", SpaceString);


    printf (" then we have this string %s \n ", trailSpace);

    trailSpace = rm_right_space(trailSpace) ;
    printf ("Then we remove right white space :%s \n ", trailSpace);


     printf (" please enter a char to search for from previous string \n ");
     scanf("%s", search);
     result = find(string, search);

     // print message depending on result of search function
     if (result == -1)
     printf ("no such char is contained in %s\n ",string);
     else
     printf (" %s is in the %i th index of %s \n ",search,result,string);




 }
