/* rm_left_space.c */
#include <stdio.h>
#include <ctype.h>
#include"StringLib.h"

/*
A function for custom string library.

removes whitespace characters from the beginning of s
*/


char* rm_left_space(char *s) {

 while(isspace(*s)) {
        s++;
    }
return s;

}

