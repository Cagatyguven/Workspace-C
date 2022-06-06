#include<stdio.h>
#include<stdlib.h>
#include "nutility.h"
#include<time.h>
#include<ctype.h>

//                              DİZİLER


//          Örnek       -     1      -       ÖMÜRLERİNE GÖRE ARRAYLER
/*
void func()
{
    int a[5] = {0,1,2,3,4}; // bu dizi otomatik ömürlü
                            // fonksiyon içindeki ömür default olarak otomatiktir.
                            // statik ön eki ile statiğe de çevrilebilir.
    for (int i=0;i<5;++i){
        printf("%d",a[i]);
    }
    
    printf("\n");

    for(int i=0;i<5;++i){
        ++a[i];//dizinin elemanlarının değerleri 1 arttırıyor.
    }
}

int main()
{
    func();//ilk başta 0-1-2-3-4 basılacak 
    func();//static ömürlü olsa 1-2-3-4-5 basması lazımdı ama yine 0-1-2-3-4
    func();// 0-1-2-3-4
    func();// 0-1-2-3-4
    func();// 0-1-2-3-4
    func();// 0-1-2-3-4
}
*/




//          Örnek       -     2      -     eleman sayısı bilinmeyen diziye elaman atayarak eleman sayısını belirleme
/*
int main()
{
    int a[] = { [5] = 453 , [25] =  245 , [22] = 241 ,  [11] = 231};

    int size = sizeof a / sizeof a[0];// a 'nin lengthi
    for ( int i = 0 ; i < size ; ++i){
        printf("%d\n",a[i]);
    }
}
*/




//          Örnek       -     3     - rastgele sayı üretilip hepsinin to planması ve aritmetik ortalamasını bulma
/*
#define     SIZE    100
int main()
{
    int a[SIZE];
    int sum = 0;
    randomize();
    set_array_random(a, SIZE);
    print_array(a, SIZE);


    for ( int i = 0; i < SIZE; ++i){
        sum += a[i];
    }


    printf("ortalama = %f\n",  (double)sum/SIZE);
    
}
*/





//          Örnek       -     4     -     bir dizinin  en büyük, en küçük, runner-up(2.max), min-max bulmak değerlerini bulmak.
/*
#define     SIZE    20
int main()
{
    int a[SIZE];

    randomize();
    set_array_random(a, SIZE);
    print_array(a, SIZE);


    int max = a[0];
    int index_max=0;

    for (int i = 1;  i < SIZE; ++i){  // max ve max indexi bulma kısmı
        if (a[i] > max)
            max= a[i];
            index_max=i;
    }
    printf("max = %d,index = %d\n",max,index_max);




    int max2 = a[0];
    int min = a[0];

    for (int i = 1;  i < SIZE; ++i){  // min ve max aynı anda bulma
        if (a[i] < min)
            min= a[i];
        else if (a[i] > max2)
            max2=a[i];
    }
    printf("min = %d,max = %d\n",min,max2);


    int max_1=a[0];
    int max_runnerup=a[1];

    if ( a[0] < a[1]) //runner up
        max_1 = a[1] , max_runnerup = a[0];
    
    for (int i = 2;  i < SIZE; ++i){
        if(a[i] >  max_1){
            max_runnerup=max_1;
            max_1=a[i];
        }
        else if(a[i]>max_runnerup)
            max_runnerup=a[i];
    }
    printf("runner_up %d\n",max_runnerup);
}
*/





//            ödev     - 
/*

#define SIZE 20
int main()
{
    int a[SIZE];

    randomize();

    for( int i = 0; i < SIZE ; ++i){
        a[i] = rand() % 20;
        printf("%3d ", a[i]);
    }
    printf("\n");

    //üretilen rastgele sayılardan uniq olanları geldiği sırayla bastıracaksınız.


}
*/




//                                      fundemantal algorithms


//          Örnek       -     5     -     dizi içinde elemanı bulma 1. yol (flag ile)
/*
#define     SIZE    20
int main()
{
    int a[SIZE];

    randomize();
    set_array_random(a, SIZE);
    print_array(a, SIZE);


    int sval;

    printf("aranacak degeri girin: ");
    scanf("%d",&sval);

    int i;
    int found = 0;

    for(i=0; i<SIZE; ++i){
        if(a[i] == sval){
            found=1;
            break;
        }
    }
    if (found){
        printf("bulundu %d indisli elemani\n", i);
    }
    else{
        printf("bulunamadi");
    }

}
*/




//          Örnek       -     6     -     dizi içinde elemanı bulma 2. yol (SADECE BREAK İLE)
/*
#define     SIZE    20
int main()
{
    int a[SIZE];

    randomize();
    set_array_random(a, SIZE);
    print_array(a, SIZE);


    int sval;

    printf("aranacak degeri girin: ");
    scanf("%d",&sval);

    int i;

    for(i=0; i<SIZE; ++i){
        if(a[i] == sval){
            break;
        }
    }
    if (i < SIZE){
        printf("bulundu %d indisli elemani\n", i);
    }
    else{
        printf("bulunamadi");
    }

}
*/




//          Örnek       -     7     -     dizi içinde elemanı bulma 3. yol (EN ÇOK KULLANILAN YÖNTEM)
/*
#define     SIZE    20
int main()
{
    int a[SIZE];

    randomize();
    set_array_random(a, SIZE);
    print_array(a, SIZE);


    int sval;

    printf("aranacak degeri girin: ");
    scanf("%d",&sval);

    int i;

    for(i=0; i<SIZE && a[i] != sval; ++i)
        ;
    if (i < SIZE){
        printf("bulundu %d indisli elemani\n", i);
    }
    else{
        printf("bulunamadi");
    }
}
*/





//                                      SIZEOF OPERATOR                                      

//              örnek    -       8        -     sizeof basic örnekler
/*
int main(){
    int x=10;

    char c=1;


    printf("%zu\n", sizeof   x + 5     ); // 4 int türü yeri + 5 = 9 gelir output
    printf("%zu\n", sizeof ( x + 5  ));   // x+5 sonucu yine int bundan dolayı = 4 gelir output
    printf("%zu\n", sizeof ( x + 5. ));   // double 8 byte yer kaplar bu yüzden output 8
    printf("%zu\n", sizeof   c);          // char 1 byte yer kaplar.
    printf("%zu\n", sizeof  +c);          // + işlemi olduğu için türü inte yükseltiliyor bu yüzden output 4tür.

}
*/




//              örnek   -       9      -    sizeof operatörünün dizilerde kullanımı
/*
int main()
{
    char buf[200];
    int a[50];
    double da[20];

    printf("sizeof(buf) = %zu\n",sizeof(buf));        // 200 * 1 byte =  200 byte bellekte yer kaplar.
    printf("sizeof(a) = %zu\n",sizeof(a));            // 50  * 4 byte =  200 byte bellekte yer kaplar.
    printf("sizeof(da) = %zu\n",sizeof(da));          // 20  * 8 byte =  160 byte bellekte yer kaplar.

}
*/



//              örnek   -       10     -     sizeof ile array uzunluğu  
/*
int main()
{
    int a[]= { 2,5,7,1,34,6,9,44,678,123,45,33};

    for (int i = 0; i<asize(a) ; ++i )
        printf("%d ",a[i]);
}
*/



//              örnek   -       11     -    

int main()
{
    int a[5]={0,1,2,3,4};

    for ( int i = -2 ; i < asize(a) - 2; ++i)
        printf("%d ", a[i+2]);   
        //output boştur. Yani hiç bir şey basmaz. Bunun nedeni asize(a) unsigned intdir. 
        //int ile unsigned int işleme sokulursa yine unsigned int elde edilir.
        //i<asize(a) operatöründe işlem işaretsize döner.
        //Koşul sağlanamadığı için bu operatörde for döngüsü içine hiç girmiyor
}