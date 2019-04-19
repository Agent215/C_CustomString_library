# C_CustomString_library

 From Temple assignment. CIS 2107 low level systems programing.
 ## string editing library for use with c.
 
 the .c files are the source files ,
 the .o files are the object files used to compile the library.
 the .a file is the library file compiled from the .h and the .c files
 
 ## Documentation of functions 
- int str_len(char *s)

         Returns the number of characters in the string s (up to but not including the '\0' character).Note: Use pointer notation, not array notation for this. An example strlen implementation is shown below. Before just using this code, please understand what it is doing (you will be asked to explain why that code works). There are multiple ways you could implement this, so if your implementation is different from the below example, that is not a problem (as long as it works correctly of course).

- int all_letters(char *s)
Returns 1 if all of the characters in the string are either upper-case or lower-case letters of the alphabet. It returns 0 otherwise.

- num_in_range(char *s1, char b, char t)
returns the number of characters c in s1 such that b<=c<=t

- diff(char *s1, char *s2)
returns the number of positions in which s1 and s2 differ, i.e., it returns the number of changes that would need to be made in order to transform s1 into s2, where a change could be a character substitution, an insertion, or a deletion.

- void shorten(char *s, int new_len)
Shortens the string s to new_len. If the original length of s is less than or equal to new_len, s is unchanged

- int len_diff(char *s1, char *s2)
Returns the length of s1 - the length of s2

- void rm_left_space(char *s)
removes whitespace characters from the beginning of s

- void rm_right_space(char *s)
removes whitespace characters from the end of s

- void rm_space(char *s)
removes whitespace characters from the beginning and the ending s

- int find(char *h, char *n)
returns the index of the first occurence of n in the string h or -1 if it isn't found.

- char *ptr_to(char *h, char *n)
returns a pointer to the first occurence of n in the string h or NULL if it isn't found

- is_empty(char *s)
returns 1 if s is NULL, consists of only the null character ('') or only whitespace. returns 0 otherwise.

- str_zip(char *s1, char *s2)
Returns a new string consisting of all of the characters of s1 and s2 interleaved with each other. For example, if s1 is "Spongebob" and s2 is "Patrick", the function returns the string "SPpaotnrgiecbkob"

- void capitalize(char *s)
Changes s so that the first letter of every word is in upper case and each additional letter is in lower case.

- int strcmp_ign_case(char *s1, char *s2)
Compares s1 and s2 ignoring case. Returns a positive number if s1 would appear after s2 in the dictionary, a negative number if it would appear before s2, or 0 if the two are equal.

 - void take_last(char *s, int n)
Modifies s so that it consists of only its last n characters. If n is ≥ the length of s, the original string is unmodified. For example if we call take_last("Brubeck" 5), when the function finishes, the original string becomes "ubeck"

- dedup(char *s)
returns a new string based on s, but without any duplicate characters. For example, if s is the string, "There's always money in the banana stand.", the function returns the string "Ther's alwymonitbd.". It is up to the caller to free the memory allocated by the function.

- pad(char *s, int d)
returns a new string consisting of all of the letters of s, but padded with spaces at the end so that the total length of the returned string is an even multiple of d. If the length of s is already an even multiple of d, the function returns a copy of s. The function returns NULL on failure or if s is NULL. Otherwise, it returns the new string. It is up to the caller to free any memory allocated by the function.

- ends_with_ignore_case(char *s, char *suff)
returns 1 if suff is a suffix of s ignoring case or 0 otherwise.

- char *repeat(char *s, int x, char sep)
Returns a new string consisting of the characters in s repeated x times, with the character sep in between. For example, if s is the string all right, x is 3, and sep is , the function returns the new string all right,all right,all right. If s is NULL, the function returns NULL. It is up to the caller to free any memory allocated by the function.

- char *replace(char *s, char *pat, char *rep)
Returns a copy of the string s, but with each instance of pat replaced with rep, note that len(pat) can be less than, greater than, or equal to len(rep). The function allocates memory for the resulting string, and it is up to the caller to free it. For example, if we call replace("Fiore X", "X", "sucks"), what is returned is the new string Fiore sucks (but remember, pat could be longer than an individual character and could occur multiple times).

- char *str_connect(char **strs, int n, char c)
Returns a string consisting of the first n strings in strs with the character c used as a separator. For example, if strs contains the strings {"Washington", "Adams", "Jefferson"} and c is '+', the function returns the string "Washington+Adams+Jefferson"

- void rm_empties(char **words)
words is an array of string terminated with a NULL pointer. The function removes any empty strings (i.e., strings of length 0) from the array.

- char **str_chop_all(char *s, char c)
Returns an array of string consisting of the characters in s split into tokens based on the delimeter c, followed by a NULL pointer. For example, if s is "I am ready for a nice vacation" and c is ' ', it returns {"I", "am", "ready", "for", "a", "nice", "vacation", NULL}
 
 
 
  #include "StringLib"
  to compile library for use with your program you would type :
  gcc -o ProgName progName,c -L. -lstr2109 
