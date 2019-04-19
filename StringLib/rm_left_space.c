/* rm_left_space.c */
#include <stdio.h>
#include <ctype.h>
#include"StringLib.h"

/*
A function for custom string library.

removes whitespace characters from the beginning of s
*/


/*
testing
char* rm_left_space(char *s);

int main( int argc , char **argv) {

   char* string = "    Leading_SPACE_here";


    printf (" first we have this string %s \n ", string);

    string = rm_left_space(string) ;
    printf ("Then we have this string: %s \n ", string);



}

*/
char* rm_left_space(char *s) {

 while(isspace(*s)) {
        s++;
    }
return s;

}

