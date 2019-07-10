#ifndef __TEST_STRING_FUNCTS_H__
#define __TEST_STRING_FUNCTS_H__

#include <stdlib.h>

#define STRING_SET { "312", "232", "145" }
#define ARRAY_SIZE(__str) (sizeof(__str)/sizeof(__str[0]))

void print_strings(char **strings, size_t size);

void test_reverse_strings();

void test_sort_strings();

#endif //__TEST_STRING_FUNCTS_H__