#include<stdio.h>
#include<ctype.h>

//                  CTYPE.H- KARAKTER TEST  FONKSİYONLARI 


//   ÖRNEK - 1 - ISPRIME
/*
#include<stdlib.h>


int main()
{
    int c;
    // stdlib kütüphanesinde bulunan rand rastgele değerler üretir
    for(int i =0;i<100;i++){
        c=rand() % 128; // c'ye 0-127 arasında rastgele bir karakter atadım
        if (isprint(c))
            putchar(c);
        
    }
}
*/



//                  KARAKTER DÖNÜŞÜM FONKSİYONLARI


//   ÖRNEK - 2  - toupper fonksiyonu
/*
int main()
{
    int  ch;
    
    printf("bir karakter girin: ");
    ch=getchar();

    printf("%c ==> %c\n",ch,toupper(ch));
    //girilen küçük harfleri büyük yapar diğerlerini aynen basar
    printf("%c ==> %c\n",ch,tolower(ch));
}
*/

//   ÖRNEK - 3
/*
int main()
{
    int cx,cy;

    printf("iki karakter girin: ");
    cx=getchar();
    cy=getchar();

    if(toupper(cx)==toupper(cy))
        printf("%c ve %c ayni karakter\n",cx,cy);
    else
        printf("%c ve %c farkli karakter\n",cx,cy);
}
*/


//   ÖRNEK - 4 - koşul operatörü -ascii için toupper 
/*
// for ascii için
int toupper(int c)
{
    return c >= 'a' && c <= 'z' ?  c-'a'+'A': c;
    //ascii'de a ile c arasındaysa a'dan farklını büyük a'ya ekle
}
*/


//   ÖRNEK - 5 - CLAMP FONKSİYONU - koşul operatörü ile
/*
int clamp(int val, int low, int high)
{
        return val<high && val>low ? val : val>=high ? high : low ;
}
int main()
{
    int low,high,val;

    printf("bir tam sayi girin: ");
    scanf("%d",&val);


    printf("bir aralik girin: ");
    scanf("%d%d",&low,&high);

    printf("%d icin clamp degeri %d\n",val,clamp(val,low,high));
}
*/



//                      DÖNGÜ DEYİMLERİ (LOOP STATEMENTS)


//   ÖRNEK -  6  - while dögüsü ile basamak sayacı
/*
int ndigit(int val)
{
    int digit_count=0;
    while(val!=  0){ 
        ++digit_count;
        val /= 10;

    }
    return digit_count;
}

int main()
{   
    int sayi;
    printf("bir sayi girin; ");
    scanf("%d",&sayi);


    printf("%d, %d basamaklidir.",sayi,ndigit(sayi));
}
*/


//   ÖRNEK -  7  -  while dögüsü ile sayının tersini alma
/*
int rdigit(int val)
{
    int retval = 0;

    while(val){
        retval = retval * 10 + val % 10;
        val /= 10;
    }

    return retval;
}
int main()
{   
    int sayi;
    printf("bir sayi girin; ");
    scanf("%d",&sayi);


    printf("%d sayisinin tersi %d ",sayi,rdigit(sayi));
}
*/


//   ÖRNEK -  8  - while döngüsü ile basamakların toplamını bulma
/*
int sumdigit(int val)
{
    int sum=0;

    while(val)
    {
        sum += val % 10;
        val /= 10;
    }
    return sum;
}
int main()
{   
    int sayi;
    printf("bir sayi girin; ");
    scanf("%d",&sayi);


    printf("%d basamaklari toplami %d ",sayi,sumdigit(sayi));
}
*/


//   ÖRNEK -  9  - mükemmel sayi testi(bölenlerinin toplamına eşit olan sayı)
/*
int isperfect(int val)
{
    int sum_divisors=0;
    int i =1;

    while(i <= val/2){
        if(val % i == 0){
            sum_divisors += i;

        }
        ++i;
    }
    return sum_divisors==val;
}

int main()
{
    int i= 1;
    while(i<100000){
        if(isperfect(i))
            printf("%d mükemmel sayidir\n",i);
        ++i;
    }
}
*/


//   ÖRNEK -  10  - ünlü mülakat sorus. Bu kodun çıktısı ne?

int main()
{
    int i = 0;

    while(i++ < 100);
    {
        printf("%d\n",i);
        // 101 basar çünkü while döngüsü sonunda noktalı virgül var
        // Normal bir while dögüsü olsaydı 1'den 100e kadar basardı
    }
}

