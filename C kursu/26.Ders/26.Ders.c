#include<stdio.h>
#include "nutility.h"
#include<stdlib.h>
#include<time.h>


//                                              SIZEOF



//              ÖRNEK           -           1           -       dizi içindeki uniq değerleri orjinal dizideki sırasıyla basma
/*
#define SIZE 20
int main()
{
    int a[SIZE];

    randomize();
    for(int i = 0; i < SIZE ; ++i ){
        a[i] = rand() % 20;
        printf("%3d ", a[i]);

    }
    printf("\n\n");


    int i, k;

    for (i = 0; i < SIZE; ++i){
        for ( k = 0; k < SIZE ; ++k){
            if(i != k && a[i]==a[k])
                break;
        }
        if (k == SIZE)
            printf("%3d ", a[i]);// eğer uniq değil ise sıze değerine ulaşamadan break ile çıkacak ama uniq ise size değerine ulaşmadan döngü bitemez
    }

}
*/


//              ÖRNEK           -           1           -       ilk örneği o(n) ile sırasız bir şekilde bulma

#define SIZE 20
int main()
{
    int a[SIZE];
    int cnt[20] = { 0 };

    randomize();
    for(int i = 0; i < SIZE ; ++i ){
        a[i] = rand() % 20;
        printf("%3d ", a[i]);

    }
    printf("\n\n");

    for (int i = 0; i < SIZE; ++i){
        ++cnt[a[i]];
    }
    
    for (int i = 0 ; i < 20 ; ++i){
        printf("%d ", cnt[i]);
    }
    

}