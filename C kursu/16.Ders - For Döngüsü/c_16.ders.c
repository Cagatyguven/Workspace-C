#include<stdio.h> 

//                      FOR DÖNGÜ DEYİMİ

//       ÖRNEK - 1 - collatz denklemi
/*
void print_collatz(unsigned long long n)
{
    while ( n != 1 ){
        printf("%llu\n",n);
        if ( n % 2 == 0)
            n /= 2;
        else
            n = 3*n + 1; 
    }
    printf("1\n");
}
int main()
{
    unsigned long long x;

    printf("bir sayi girin: ");
    scanf("%llu",&x);

    print_collatz(x);
}
*/


//       ÖRNEK - 2 - Asal Sayı Test Fonksiyonu
/*
int isprime(int val)
{
    if (val< 2)
        return 0;
    if( val % 2 == 0)
        return val == 2;
    if(val % 3 == 0)
        return val ==3 ;
    if(val % 6 == 0)
        return val ==5 ;
    for (int i = 7;i *i <= val; i+=2){
        if (val %i == 0)
            return 0;
        }
    return 1;
}

int main()
{
      int low, high;

      printf("bir aralik girin");
      scanf("%d%d",&low,&high);

    for (int i= low ; i< high;  ++i) {
        if(isprime(i))
            printf("%d asaldir.\n",i);
    }
}
*/


//       ÖRNEK - 3 - FAKTÖRİYEL 
/*
long long int factorial(int x)
{
    long long int result=1;
    for(int i=1  ; i <= x ; ++i)
    {
        result *= i;

    }
    return result;
}

int main()
{
    for(int i=0;i<21;++i){
        printf("%2d! = %lld\n",i,factorial(i));
    }
}
*/


//       ÖRNEK - 4 - kombinasyon- fonksiyonları başka fonksiyonda kullanma
/*
long long int factorial(int x)
{
    long long int result=1;
    for(int i=1  ; i <= x ; ++i)
    {
        result *= i;

    }
    return result;
}

int combination(int n, int r)
{
    return factorial(n)/ (factorial(n-r)*factorial(r));
}

int main()
{
    int x,y;
    printf("iki tam sayi girin: ");
    scanf("%d%d",&x,&y);

    printf("C(%d,%d)=%d",x,y,combination(x,y));
}
*/


//       ÖRNEK - 5 - e sayısı hesaplama
/*
long long int factorial(int x)
{
    long long int result=1;
    for(int i=1  ; i <= x ; ++i)
    {
        result *= i;

    }
    return result;
}

int main()
{
    int n;
    double sum=0;  

    printf("serinin kac terimi toplansin: ");
    scanf("%d",&n);

    for (int i= 0; i<n ;++i)
        sum += 1./factorial(i);
    
    printf("e sayisi= %f\n", sum);
}
*/



//                   İç İçe Döngüler ( Nested Loops )

//       ÖRNEK - 6   - for içinde for
/*
int main()
{
    int count=0;
    for (int i=0;i<10;++i){
        for(int k=0;k<20;++k){
            ++count;
            printf("(%d,%d)\n",i,k);
        }
    }
    printf("% d",count);
}
*/









//        ödev sorusu 1 - Arkadaş sayı 
// 2  sayı nın bölenlerinin toplamı  diğer sayıya eşit ise bu iki sayı arkadaş sayıdır.
/*
//17296 ve 18416
int are_friends(int x,int y)
{
    //*********
}
int main()
{
    int a,b;

    printf("iki sayi girin");
    scanf("%d%d",&a&b);

    if(are_friends(a,b))
        printf("arkadas sayilar");
    else
        printf("arkadas sayilar degil");
}
*/


//        ödev sorusu 2 - amstrong sayısı(9 basamaklılara kadar)
// amstrong sayısı demek -> abcde= a^5+b^5+c^5+d^5+e^5  






