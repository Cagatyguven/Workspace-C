#include<stdio.h>
#include<stdlib.h>
#include "nutility.h"

//                                  tür dönüşümleri


//              ÖRNEK    -    1     -   sayı yuvarlama
/*
int main()
{
    double dval;

    printf("[-5 +5] araliginda bir gercek sayi girin: ");
    scanf("%lf",&dval);

    printf("%f ===> %d\n",dval, (int)(  dval > 0 ? dval + .5: dval -.5 ) );
}
*/



//                                  rastgele sayı üretimi

//              ÖRNEK    -    2     -     rand fonksiyonu kullanımı
/*
int main()
{
    for (int i= 0; i<10; ++i){
        printf("%d\n",rand());
        //bu kodu her çalıştırdığımızda aynı 10 sayıyı basıcak
        //10 değil 20 kere çalıştırsaydık 20 sayının ilk 10'u ,10 sayı elde ettiğimiz döngüdeki ile aynı olcaktı.
    }
}
*/


//              ÖRNEK    -    3    -  her tohum değeri için rastgele sayı basma
/*
#include<conio.h>
int main()
{
    for ( unsigned int i= 1 ; i<100 ; ++i ){
        srand(i);
        printf("tohum degeri %u icin sayi zincirinin ilk 100 sayisi\n",i);
        for(int k=0;k<100;++k)
            printf("%d ",rand());
        getchar();
        system("cls");
    }
}
*/


//              ÖRNEK    -    4   -  her klavye tuşuna basıldığında farklı değer oluşturma - part 2
/*
#include<conio.h>

int main()
{
    for (unsigned int i=1; i<500; ++i){
        printf("%d ",rand() % 6 + 1);
        _getch();
    }
}
*/


//              ÖRNEK    -    5   -  yazı tura  olasılık hesabı
/*

#define NTOSS   10000
#define TURA   0
int main()
{
    int  tura_counter = 0;
    int  yazi_counter = 0;

    for (int i = 0 ; i < NTOSS ; ++i){// belirtildiği kadar işlem yap
        if( rand() % 2 == TURA)//rand sayilarin hepsini ikiye bölümünden kalanı 0 öı diye kontrol et öyleyse tura +1 yap
            ++tura_counter;//tura sayısını arttır
        else
            ++yazi_counter;
    }

    printf("tura gelme olasiligi %.12f\n",(double)tura_counter/NTOSS);
    printf("yazi gelme olasiligi %.12f\n",(double)yazi_counter/NTOSS);
}
*/


//              ÖRNEK    -    6   - kreps kumar oyunu( çok popüler )
// oyun tanımı: kasaya karşı bir çift zar atılıyor,
// toplamları  7 veya 11 gelirse kazanıyorsunuz .2,3 12 ise kaybediyorsunuz.
// 4,5,8,9,10 ise oyun değişik bir faza giriyor. Bu zarlardan birini attıysanız aynı zarı tekrar atmanız gerekir. Aynı zarı atana kadar 7 ve 11 atarsanız kaybedersiniz
// oyuncunun kazanma olasılığı %49.2...

#define   NGAMES    10000000 

int roll_dice(void)
{
    int dice_x = rand() % 6 + 1 ; // mod operatörü kullanımı yanlış normalde
    int dice_y = rand() % 6 + 1 ;

    return dice_x + dice_y ;

}

int game_(int dice)
{
    int new_dice;

    for(;;)
    {
        new_dice=roll_dice();
        if (new_dice == 7)
            return 0;
        if (new_dice == dice)
            return 1;
    }
}

//if game returns 1, player wins
//if game returns 0, player loses
int game(void)
{
    int dice=roll_dice();

    switch (dice)
    {
        case 7:
        case 11: return 1;
        case 2:
        case 3:
        case 12: return 0;
        default: return game_(dice); 

    }
}



int main()
{
    int win_count = 0 ;
    for ( int i = 0 ; i < NGAMES ; ++i ) {
        win_count += game();  // kaybederse 0 geleceği için win_count'ı etkilemicek  
    }

    printf("oyuncunun kazanma olasiligi %f\n",(double)win_count/ NGAMES);

}