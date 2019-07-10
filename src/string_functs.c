#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "../libs/malloc.h"
#include "../libs/quicksort.h"
#include "../libs/string_functs.h"

/** ---------------------------
 * Reverse String Function
 * ---------------------------- */
char *reverse_string_copy( char *string ){  
  if( !string || !*string )
    return string;
  
  char *start, *end, *rev_string;
  int index, size;

  rev_string = new(char, strlen(string));
  size = strlen(string);
  
  for( index = 0, start = string, end = &rev_string[strlen(string) - 1]; 
       index < size; 
       index++, end--, start++ )
    *end = *start;
  rev_string[index] = '\0';

  return rev_string;  
}

char *reverse_string( char *string ){
  if( !string || !*string )
    return string;

  char temp, *start, *end;
  int size = strlen(string);
  for( start = string, end = (string + size - 1);
       start < end;
       start++, end-- ) {
      temp = *start;
      *start = *end;
      *end = temp;
  }  

  return string;
}

/** ---------------------------
 * Sorting Function
 * ---------------------------- */
char **sort_strings( char **strings, int low, int high ){
  return quick_sort( strings, low, high );  
} 

