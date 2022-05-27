#ifndef NUTILITY_H
#define NUTILIT_H




#define isleap(y)  ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0)) 
#define randomize() srand((unsigned)time(NULL))

int    isprime(int val);
void   pline(void);
int    ndigit(int);

void set_array_random(int* p, int size);
void print_array(const int* p, int size);


#endif