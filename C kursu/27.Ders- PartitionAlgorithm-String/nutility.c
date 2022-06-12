#include "nutility.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


static int icmp(const void* vp1, const void* vp2)
{
    return *(const int*)vp1 - *(const int*)vp2;
}


int isprime(int val)
{
    if (val == 0 || val == 1)
        return 0;
    if (val % 2 == 0)
        return val == 2;
    if (val % 3 == 0)
        return val == 3;
    if (val % 5 == 0)
        return val == 5;
    for(int k =7; k * k <= val; k += 2)
        if (val % k == 0)
            return 0;
     
}

void pline(void)
{
    printf("\n-----------------------------------------------------------------------------------\n");
}

int ndigit(int val)
{
    if (val == 0)
        return 1;
    int digit_count=0;

    while (val)
    {
        ++digit_count;
        val /= 10;

    }
    return digit_count;
}

void set_array_random(int* p, int size)


{
    while (size--)
        *p++ = rand() % 1000;
    
}


void print_array(const int* p, int size )
{
    for (int i = 0; i < size; ++i){
        if(i != 0  && i % 20 == 0){
            printf("\n");
        }
        printf("%3d ", p[i]);
    }
    printf("\n-------------------------------------------------------------------------\n");
}


void sort_array(int *p, int size)
{
    qsort(p, size, sizeof(int), &icmp);
}


void sgets(char* p)
{
    int c;

    while((c = getchar()) != '\n')
        *p++ = c;

    *p = '\0';

    
}

