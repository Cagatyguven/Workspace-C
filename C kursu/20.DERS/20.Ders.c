#include <stdio.h>


//              ön koşul makroları


//     ÖRNEK   -    1    - #İF-ELSE-ENDİF-ELİF
/*
#define NEC   1

#if    nec==0


#elif   NEC=2


#else
    #if   NEC ==1  


#endif
#endif
*/


//     ÖRNEK   -    2    -   #İFDEF
/*
#define NEC

#ifdef NEC
    int x=10;
    typedef int Word;

    #define SIZE 100;

#endif
*/


//     ÖRNEK   -    3    -    #İFDEF

#define _USE_MATH_DEFINES

#include <math.h>

int main()
{
    double dval = M_PI;
}
    
