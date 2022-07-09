#include<stdio.h>
#include<stdlib.h>
#include"nutility.h"


//                                    CONST ANAHTAR SÖZCÜĞÜ



//              ÖRNEK     -       1       -   const syntax kuralı  
/*
#define SIZE 500
int main(){

  const int abc = 400;


  int b[abc];// BU KULLANIM HATALIDIR. 
  // C dilinde const anahtar sözcüğü ile tanımlanan değişkenler
  // sabit ifadesi gereken yerlerde kullanılamıyorlar.
  //  

  printf("%d",b[99]);
}
*/




//              ÖRNEK     -     2         -     CONST POINTER (int * const ptr;)
/*
int main(){

  int x = 10;
  int* const ptr = &x;

  // ptr:  const pointer int'dir.
  // ptr'nin değeri x olarak atandı ve hiç değişmeyecek.
  // ptr hep x'in adresini göstericek


  *ptr = 99;
  // ama x'in adresi değiştirilebilir.

  printf("%d %d %d %d",*ptr,x,ptr,&x); //99 99 6422296 6422296

  //buradaki 99 değeri değiştirilebilir. Ama ptr için 6422296 değeri değiştirilemez.
}
*/





//              ÖRNEK     -       3       -     POINTER TO CONST INT
/*
int main(){

  int x = 10;
  int* p= &x;
  const int* q = &x;

  *p = 750; //bunda sıkıntı yok çünkü p bir pointer to const int değil.

  // *q = 750 ise hatadır. Çünkü q pointer to const inttir.

  
  printf("*p = %d ,  *q = %d , x = %d",*p,*q,x);  // *p = 750 ,  *q = 750 , x = 750



}
*/





//                                    POINTER ARİTMETİĞİ


//            ÖRNEK     -       4           -  pointer aritmetiği ile değişken türüne göre adres değişimi
/*
int main(){
  
  char a[10] = { 0 };

  for (int i = 0; i< 10 ; ++i){
    printf("%p\n", a + i);//char iken 1'er 1'er
    //short olsa 2şer 2şer
    //double olsa 8'er 8'er artardı
    //bunun nedeni bir sonraki nesnenin adresini göstermesinden dolayı.
 
  }

  printf("---------------------\n");
  

  int a[10]={ 0 };
  int* ptr = &a[0];

  ++ptr;
  //int 4 byte. ptr 1 arttırıldığında a'nın 2.nesne adresine gidiliyor.
  //yani 1 artmıyor adres 4'er 4'er artıyor.
  
  //double 8 byte. ptr bir arttırıldığında 2.nesnenin adresine atlıyor.
  //yani 8 byte sonraya gidiyor. 1'er 1'er artmıyor.


  printf("a[0]= %d, a[1] veya ptr= %d",a,ptr);
  //a[0]= 6422260, a[1] veya ptr= 6422264
}
*/






//            ÖRNEK     -       5           - dizideki tüm elemanların adresi



int main(){

  int a[10] = {0,1,2,3,4,5,6,7,8,9};

  for (int i = 0; i < 10; ++i){
    printf(" dizi elemani = %d  dizi elemani = %d dizi elemani adresi = %d \n",a[i],*(a+i),a+i);
  }
  //dizi elemani = 0  dizi elemani = 0 dizi elemani adresi = 6422260 
  //dizi elemani = 1  dizi elemani = 1 dizi elemani adresi = 6422264 
  //dizi elemani = 2  dizi elemani = 2 dizi elemani adresi = 6422268 
  //dizi elemani = 3  dizi elemani = 3 dizi elemani adresi = 6422272 
  //dizi elemani = 4  dizi elemani = 4 dizi elemani adresi = 6422276 
  //dizi elemani = 5  dizi elemani = 5 dizi elemani adresi = 6422280 
  //dizi elemani = 6  dizi elemani = 6 dizi elemani adresi = 6422284 
  //dizi elemani = 7  dizi elemani = 7 dizi elemani adresi = 6422288 
  //dizi elemani = 8  dizi elemani = 8 dizi elemani adresi = 6422292 
  //dizi elemani = 9  dizi elemani = 9 dizi elemani adresi = 6422296 
  //int olduğu için 4'er 4'er arttı nesne adresleri
}