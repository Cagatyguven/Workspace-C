#include<stdio.h>
#include<stdlib.h>

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


int main()
{
    int a[] = { [5] = 453 , [25] =  245 , [22] = 241 ,  [11] = 231};

    int size = sizeof a / sizeof a[0];// a 'nin lengthi
    for ( int i = 0 ; i < size ; ++i){
        printf("%d\n",a[i]);
    }
}