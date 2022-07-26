#ifndef NUTILITY_H
#define NUTILITY_H



#include <stddef.h> // bir kaç macro ve size_t bildirimi için kullandık 
#define isleap(y)  ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0)) 
#define randomize() srand((unsigned)time(NULL))

int    isprime(int val);
void   pline(void);
int    ndigit(int);

void set_array_random(int* p, size_t size);
void print_array(const int* p, size_t size);
void sort_array(int *p, size_t size);
void sgets(char* p);
void clear_input_buffer(void);
void swap(int* px, int* py);

#include "nutility.c"

#endif