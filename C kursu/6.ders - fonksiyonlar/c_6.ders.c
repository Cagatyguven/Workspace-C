#include <stdio.h>
//          NAME masking AND hiding

//örnek-1
/*
int x=20;

int main()
{
    int x=10;
    printf("x =%d \n", x); //output 10 olur
// blok scope'daki x diğerinin basılmasını engelledi
// buna name hiding yada name masking denir.

}
*/

//örnek-2 
/*
int x=56;

int main ()
{
    printf("[1] x= %d\n",x); //56

    int x=10;
    printf("[2] x= %d\n",x); //10
    {
        int x=90;
        printf("[3] x= %d\n",x); //90
    }
    printf("[4] x= %d\n",x); //10
}
*/

//-----------------------------------------------------
//-----------------------------------------------------






//              FONKSİYONLAR

//örnek-3
/*

int ndigit(int value)
{
    if (val == 0)
        return1;
    int digit_count =0;

    while (val) {
        ++digit_count;
        val /= 10;
    }

    return digit_count;
}
// bu fonksiyonun adı= ndigit,türü int
// parametre değişkeni 1 tane var. Adı val ,türü int
*/


//örnek-4
int get_abs(int a) //mutlak değer alma fonksiyonu
{
    if (0 > a)
        return -a;
    else
        return a;
}
 