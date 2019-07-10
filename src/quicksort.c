#include <stdio.h>
#include <string.h>
#include "../libs/quicksort.h"

void swap( char **a, char **b ){
  char *temp = *a;
  *a = *b;
  *b = temp;
}

int partition( char **strings, int low, int high ) {
  char *pivot = strings[high];
  size_t smaller_element_index = (low - 1);

  int current_index;  
  for( current_index = low; current_index < high; current_index++ )
    if( strcmp(strings[current_index], pivot) <= 0 )                
      swap(&strings[(smaller_element_index++) + 1], &strings[current_index]);    
    
  swap(&strings[smaller_element_index + 1], &strings[high]);

  return (smaller_element_index + 1);
}

char **quick_sort( char **strings, int low, int high ){
  if( low < high ){
    size_t partion_index = partition(strings, low, high);
    strings = quick_sort(strings, low, partion_index - 1);
    strings = quick_sort(strings, partion_index + 1, high);
  }
  return strings;
}