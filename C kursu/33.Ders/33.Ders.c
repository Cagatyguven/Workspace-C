#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "nutility.h"



//                                          ADRES DÖNDÜREN FONKSİYONLAR

//              ÖRNEK       -       1       - adres döndüren fonksiyon ile global değişken değiştirme
/*
int g = 10;

int *foo(void){

    return &g;

}
int main(){

    int* ptr = foo();

    printf("*ptr = %d \n",*ptr);//*ptr = 10 
      
    *ptr=777;
    printf(" g = %d \n",g); //g = 777 

    *foo()=888;
    printf(" g = %d",g); //g = 888

}
*/




//              ÖRNEK       -       2       -  adres döndüren fonksiyon ile  dizi elemanı değeri değiştirme
/*
int a[5] = { 0, 1, 2, 3, 4 };

int *foo(void){

    return a;

}
int main(){

    
    ++foo()[2];   // ++(*( foo + 2)) demek oluyor bu yani 2. indisli elemanı 1 arttır demek

    printf("a[2] = %d",a[2]); // a[2] = 3, normalde 2idi

}
*/




//              ÖRNEK       -       3       - otomatik ömürlü değişkenin nesne  adresini döndürme(hatalı kod örneği)
/*
int* get_int(void){

  
  int x;
  // static int x; şeklinde yazılmalıydı

  printf("bir tam sayi giriniz: ");
  scanf("%d", &x);

  return &x; // bu undefined behaviordır.
  //

}

int main(){

  int *ptr;

  ptr = get_int();
  printf("girilen sayi: %d\n",*ptr);
    
}
*/




//              ÖRNEK       -       4       - bir dizinin en büyük elamanın adresini döndüren fonksiyon
/*
#define SIZE 50

int* get_array_max(const int* pa, size_t size){

    int* pmax= (int *)pa;

    for (size_t i = 0; i < size; ++i){
      if(pa[i]>*pmax)
        pmax=(int *)&pa[i];
        //pmax=(int *)(pa + i); şeklinde de yazılabilir.
    }

    return pmax;
}

int main(){

    int a[SIZE];
    int* pmax;

    randomize();
    set_array_random(a,SIZE); 
    print_array(a,SIZE);
    pmax=get_array_max(a,SIZE);

    printf("en büyük deger: %d  dizinin %d indisli elemani.\n",*pmax,pmax-a);
    *pmax = -1;

    print_array(a,SIZE);
}
*/




//              ÖRNEK       -       5       - bir dizinin en büyük elemanına kadar olan tüm elemanları bastırma (print_array ile)
//yukarıdaki örneğe bir print_array eklenecek okadar.
/*
#define SIZE 10 

int* get_array_max(const int* pa, size_t size){

    int* pmax= (int *)pa;

    for (size_t i = 0; i < size; ++i){
      if(pa[i]>*pmax)
        pmax=(int *)&pa[i];
        //pmax=(int *)(pa + i); şeklinde de yazılabilir.
    }

    return pmax;
}

int main(){

    int a[SIZE];
    int* pmax;

    randomize();
    set_array_random(a,SIZE); 
    print_array(a,SIZE);
    pmax=get_array_max(a,SIZE);

    printf("en büyük deger: %d  dizinin %d indisli elemani.\n",*pmax,pmax-a);
  

    print_array(a,pmax-a+1);
  
}
*/




//              ÖRNEK       -       6        - bir dizinin en büyük elemanından itibaren tüm elemanları bastırma
/*
#define SIZE 10 

int* get_array_max(const int* pa, size_t size){

    int* pmax= (int *)pa;

    for (size_t i = 0; i < size; ++i){
      if(pa[i]>*pmax)
        pmax=(int *)&pa[i];
        //pmax=(int *)(pa + i); şeklinde de yazılabilir.
    }

    return pmax;
}

int main(){

    int a[SIZE];
    int* pmax;

    randomize();
    set_array_random(a,SIZE); 
    print_array(a,SIZE);
    pmax=get_array_max(a,SIZE);

    printf("en büyük deger: %d  dizinin %d indisli elemani.\n",*pmax,pmax-a);
  

    print_array(pmax,&a[SIZE]-pmax);
    //print_array(pmax,SIZE-(pmax-a));
    // adres - adres = tam sayıdır. Bundan dolayı 2. seçenek de olabilirdi.  
}
*/




//              ÖRNEK       -       7        - dizinin max ve min elemanını bulup bunların yerlerini takas etmek
/*
#define SIZE 10 

int* get_array_min(const int* pa, size_t size){

    int* pmin= (int *)pa;

    for (size_t i = 0; i < size; ++i){
      if(pa[i] < *pmin)
        pmin=(int *)&pa[i];
        //pmin=(int *)(pa + i); şeklinde de yazılabilir.
    }

    return pmin;
}

int* get_array_max(const int* pa, size_t size){

    int* pmax= (int *)pa;

    for (size_t i = 0; i < size; ++i){
      if(pa[i]>*pmax)
        pmax=(int *)&pa[i];
        //pmax=(int *)(pa + i); şeklinde de yazılabilir.
    }

    return pmax;
}



int main(){

    int a[SIZE];
    int* pmax;
    int* pmin;

    randomize();
    set_array_random(a,SIZE); 
    print_array(a,SIZE);
    pmax=get_array_max(a,SIZE);
    pmin=get_array_min(a,SIZE);
    printf("en büyük deger: %d  dizinin %d indisli elemani.\n",*pmax,pmax-a);
    printf("en kucuk deger: %d  dizinin %d indisli elemani.\n",*pmin,pmin-a);

    swap(get_array_max(a,SIZE),get_array_min(a,SIZE));//SWAP FONKSİYONUNA PARAMETRE OLARAK DİĞER FONKSİYONLARIN GERİ DÖNÜŞ DEĞERİ VERİLDİ.

    print_array(a,SIZE);


}  
*/




//              ÖRNEK       -       8        - bir dizinin en büyük elemanından en küçük elemanına kadar olan kısmı bastırma
/*
#define SIZE 10 

int* get_array_min(const int* pa, size_t size){

    int* pmin= (int *)pa;

    for (size_t i = 0; i < size; ++i){
      if(pa[i] < *pmin)
        pmin=(int *)&pa[i];
        //pmin=(int *)(pa + i); şeklinde de yazılabilir.
    }

    return pmin;
}

int* get_array_max(const int* pa, size_t size){

    int* pmax= (int *)pa;

    for (size_t i = 0; i < size; ++i){
      if(pa[i]>*pmax)
        pmax=(int *)&pa[i];
        //pmax=(int *)(pa + i); şeklinde de yazılabilir.
    }

    return pmax;
}



int main(){

    int a[SIZE];
    int* pmax;
    int* pmin;

    randomize();
    set_array_random(a,SIZE); 
    print_array(a,SIZE);
    pmax=get_array_max(a,SIZE);
    pmin=get_array_min(a,SIZE);
    
    // benim çözümüm(necati hoca da aynı şekilde yaptı)
    if(pmax>pmin)
        print_array(pmin,pmax-pmin+1);
    else
        print_array(pmax,pmin-pmax+1);

}
*/




//              ÖRNEK       -       9        - selection sort sıralama algoritması(seçme sıralama algoritması)
// selection sort sıralama algoritması: o(n^2) karmaşıklığında sıralama algoritması. 
// KÜÇÜKTEN BÜYÜĞE SIRALANIRKEN, en küçük değer bulunur, ilk indisteki elemanla değiştirilir. en küçük 2.değer için de aynı işlem yapılır böyle böyle devam eder.
// her bir elemanı yerine koyma işlemi maliyeti (n-1)
// en küçük değer bulma işlemi maliye de (n-1)
// total maliyet o(n^2)
/*
#define SIZE 100  

int* get_array_min(const int* pa, size_t size){

    int* pmin= (int *)pa;

    for (size_t i = 0; i < size; ++i){
      if(pa[i] < *pmin)
        pmin=(int *)&pa[i];
        //pmin=(int *)(pa + i); şeklinde de yazılabilir.
    }

    return pmin;
}

void selection(int* p, size_t size){
      
      for (size_t i = 0; i < size-1; ++i){
        swap(get_array_min(p+i,size-i),p+i);
      }
      
}
int main(){

    int a[SIZE];
    randomize();
    set_array_random(a,SIZE); 
    print_array(a,SIZE);
    selection(a,SIZE);

    print_array(a,SIZE);
}
*/




//              ÖRNEK       -       10      - char* fonksiyon ile kullanıcıdan isim alma
/*
char* get_name(void){

    // char str[100]; hatalı kullanım. Otomatik ömürlü oluyor. Statik anahtar kelimesini kullanmalıyız.
    static char str[100];
    printf("bir isim giriniz: ");
    scanf("%s", &str[0]);

    return &str[0];
}

int main(){

    char* p=get_name();

    printf("girilen isim %s",p);
    
}
*/



 
//                                              NULL POINTER




//              ÖRNEK       -       11      -

  