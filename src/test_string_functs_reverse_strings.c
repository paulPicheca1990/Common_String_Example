#include <stdio.h>
#include "../libs/string_functs.h"
#include "../libs/test_string_functs.h"
#include "../libs/test_string_functs_display.h"
#include "../libs/test_string_functs_reverse_strings.h"

void test_reverse_strings_wo_copy(){    
  char *before, strings[][4] = STRING_SET;
  int index;
  
  for( index = 0, before = strings[index]; 
       index < sizeof(strings)/sizeof(strings[0]); 
       index++, before = strings[index]) {    
    print_before( before ); 
    print_after( reverse_string(strings[index]) );    
  }  
  printf( "\n" );
}

void test_reverse_strings_w_copy(){
  char *temp, *strings[] = STRING_SET;    
  int index;
      
  for( index = 0; index < sizeof(strings)/sizeof(strings[0]); index++) {
    print_before_after( strings[index], (temp = reverse_string_copy(strings[index])) );
    free(temp);
  }
  printf( "\n" );
}