/* StringLib.h */
#ifndef STRINGLIB_H_INCLUDED
#define STRINGLIB_H_INCLUDED

/*
Abraham Schultz
4/18/2019

Header file for custom string library.
This project was completed as part of
a low level Systems course in the spring of 2019
at Temple University. CIS 2107.

*/


/***********************************************************
* Function declarations *
************************************************************/


int stringlen(char *s);
int all_letters(char *s);
int num_in_range(char *s1, char b, char t);
int diff(char *s1, char *s2);
void shorten(char *s, int new_len);
int len_diff(char *s1, char *s2);
char* rm_left_space(char *s);
char* rm_right_space(char *s);
char* rm_space(char *s);
int find(char *h, char *n);
char *ptr_to(char *h, char *n);
int is_empty(char *s);
char* str_zip(char *s1, char *s2);
void capitalize(char *s);
int strcmp_ign_case(char *s1, char *s2);
char* dedup(char *s);
char* pad(char *s, int d);
int ends_with_ignore_case(char *s, char *suff);
char *repeat(char *s, int x, char sep);
char *replace(char *s, char *pat, char *rep);
char *str_connect(char **strs, int n, char c);
void rm_empties(char **words);
char **str_chop_all(char *s, char c);

#endif // STRINGLIB_H_INCLUDED
