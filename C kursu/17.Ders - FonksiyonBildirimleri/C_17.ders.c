#include <stdio.h>

//                      İç içe Döngüler
//---------------------------------------------------------------------------------

//              ödev        -  Asal çarpanları bulma
/*
void print_prime_factors(int x)//asal çarpanları bulma
{
    int val= 2;
    while(x != 1){
        while(x%val == 0){
            printf("%d\n",val);
            x /= val;  
        }
        ++val;
    }
}
int main()
{
    int n;

    printf("bir tam sayi girin: ");
    scanf("%d",&n);

    print_prime_factors(n);
}
*/



//                   Fonksiyon Bildirimleri(Function decleration)
//-----------------------------------------------------------------------------------

    
//     ÖRNEK - 1   - void func(void) ile  void func() farkı
/*
void func_1();
void func_2(void);

int main()
{
    func_1(4);// bunda syntax hatası vermez
    func_2(4);// bunda hata verir
}
*/


//     ÖRNEK - 2   - 