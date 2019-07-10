#ifndef __QUICKSORT_H__
#define __QUICKSORT_H__

void swap( char **a, char **b );

int partition( char **strings, int low, int high );

char **quick_sort( char **strings, int low, int high );

#endif //__QUICKSORT_H__