#include <stdio.h>
#include "../libs/string_functs.h"
#include "../libs/test_string_functs.h"
#include "../libs/test_string_functs_display.h"
#include "../libs/test_string_functs_reverse_strings.h"

void test_reverse_strings() {    
  printf("%s\n", "Reversing Strings[ Using Raw Data ]:");
  test_reverse_strings_wo_copy();
  printf("%s\n", "Reversing Strings[ Using Copy of Data ]:");
  test_reverse_strings_w_copy();
} 

void test_sort_strings() {
  char *strings[] = STRING_SET;
  size_t size = ARRAY_SIZE(strings);

  printf( "%s\n", "Before Sorting:" );
  print_strings(strings, size);
  printf( "\n" );

  sort_strings(strings, 0, size-1);

  printf( "%s\n", "After Sorting:" );
  print_strings(strings, size);
  printf( "\n" );
}