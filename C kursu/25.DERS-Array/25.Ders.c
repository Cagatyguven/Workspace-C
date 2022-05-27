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


//          Örnek       -     3     -     bir dizinin  en büyük, en küçük, runner-up(2.max), min-max bulmak değerlerini bulmak.


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

    if ( a[0] < a[1])
        max_1 = a[1] , max_runnerup = a[0];
    
    for (int i = 2;  i < SIZE; ++i){
        if(a[i] >  max){
            max_runnerup=max;
            max=a[i];
        }
        else if(a[i]>max_runnerup)
            max_runnerup=a[i];
    
    printf("runner_up %d\n",max_runnerup);
}
