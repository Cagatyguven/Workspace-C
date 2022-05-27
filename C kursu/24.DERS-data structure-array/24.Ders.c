#include<stdio.h>
#include<stdlib.h>


//                                                          RASTGELE SAYI ÜRETİMİ


//          ÖRNEK    -      1       -     Kare içindeki çeyrek dairenin alana oranı üzerinden pi sayısı hesaplama(oran pi/4 normalde)
/*
#define NPOINTS 100000000
int main()
{
        int inside_count;

        for (int i = 0; i <NPOINTS;++i){

            double dx = (double)rand() / RAND_MAX;
            double dy = (double)rand() / RAND_MAX;
 
            if (dx * dx + dy * dy <= 1.)
                ++inside_count;
            
        }
        printf("pi=%.12f\n",    4. * inside_count / NPOINTS);




}
*/


//          ÖRNEK    -      2       -     uydurma şans oyunu kazanma olasılığı hesaplama(ödev)
// oyun tanımı: karşılıklı 2 kişi yazı tura atarak ilerleniyor. kişinin 10 dolardan az parası kalırsa oyun biter. Kasanın ödül parasından daha az bakiyesi kalrısa kalsa kaybeder.
//  YY arka arkaya atılırsa 35 dolar kazanıyor. 2. yazıdan sonra sıfırlanıyor. 3 kere tura gelirse arka arkaya 60 dolar kazanıyor.



//                                                            DİZİLER


//          ÖRNEK    -      3       -     dizideki en büyük sayı bulma 
/*
#define SIZE    1000

int main()
{
    int a[SIZE];
    int max = a[0];

    for ( int i = 1; i < SIZE ; ++i)
    {
        if (a[i] > max)
            max= a[i];
    }
    
}

*/


//          ÖRNEK    -      4       -     arrayin belli bir öğesine değer atama
/*
int main()
{
    int a[10];

    printf("tam sayi girin");
    scanf("%d", &a[0]);

    printf("a[0] = %d",a[0]);
}
*/

