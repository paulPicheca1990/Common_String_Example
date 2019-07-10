#include <stdio.h>
#include "../libs/string_functs.h"
#include "../libs/test_string_functs_display.h"

void print_strings(char **strings, size_t size) {
  int index;  
  for( index = 0; index < size; index++ )
    printf( "  %s\n", strings[index] );      
}

void print_before( char *before ){
  printf( "  [Before]: %s | ", before );        
}

void print_after( char *after ){
  printf( "[After]: %s\n", after );        
}

void print_before_after( char *before, char *after ){
  print_before(before);
  print_after(after);
}