#ifndef NUTILITY_H
#define NUTILITY_H




#define isleap(y)  ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0)) 

int    isprime(int val);
void   pline(void);
int    ndigit(int);

#endif