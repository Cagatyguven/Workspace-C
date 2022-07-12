#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "nutility.h"

//                              POINTER IDIOMS




//          ÖRNEK     -   1     -      *ptr++
/*
int main(){

  int a[5] = { 0, 1, 2, 3, 4};
  int* ptr = a;

  *ptr++ = 99;
  *ptr++ = 100;



  printf("  %d ",a[0]);
  printf("  %d ",a[1]);
  printf("  %d ",a[2]);
  printf("  %d ",a[3]);
  printf("  %d ",a[4]);
  //99   100   2  3   4

  *ptr = 3;

  printf("  %d ",a[2]);
  //3   


}
*/





//          ÖRNEK      -  2     -     *ptr++ ile copy_array fonksiyonunu tekrar yazma 
/*
#define SIZE 20

void copy_array(int* pdest,const int *psource, int n){

  while(n--){
      *pdest++=*psource++;
  }

}

int main(){
  int a[SIZE];
  int b[SIZE];

  randomize();
  set_array_random(a,SIZE);
  print_array(a,SIZE);

  copy_array(b,a,SIZE); //dizinin tamamını kopyalayacaksak SIZE ile


  print_array(b,SIZE);
}
*/




//          ÖRNEK     -   3      -     *++ptr
/*
int main(){
  

  int a[5] = { 0, 1, 2, 3, 4};
  int* ptr = a;

  *++ptr = 99;  //  1.indisli elemanı değiştirir 

  for (int i = 0; i < 5; ++i){
    printf(" %d ",a[i]);    //0  99  2  3  4 
  }
  
}
*/




//          ÖRNEK     -   4      -  reverse copy - mülakat sorusu - *++ptr ve *ptr++ ile
/*
#define SIZE 20
void reverse_copy(int *pdest,const int* psource,int n ){
     
    psource += n; // dizinin bittiği yerin adresi

    while (n--){
      *pdest++ = *--psource;
    }
    
}

int main(){


    int a[SIZE];
    int b[SIZE];

    randomize();

    set_array_random(a,SIZE);
    print_array(a,SIZE);

    reverse_copy(b,a,SIZE);

    print_array(b,SIZE);

}
*/




//          ÖRNEK     -   5       -  dizinin tüm elemanarını birer yükselten fonksiyon ++*ptr++
/*
void foo(int* ptr, int n){

  while(n--)
    ++*ptr++;
}

int main(){

  int a[5] = { 0, 1, 2, 3, 4};

  foo(a,5);

  print_array(a,5);

}
*/




 

//                        TÜR EŞ İSİM BİLDİRİMLERİ(typedef bildirimleri)




//        ÖRNEK     -   6         - typedef ile çoklu pointer bildirimi
/*
typedef const int* CIPTR;

int main(){

  int x = 120;
  int y = 29;

  CIPTR p1 = &x , p2 = &y;

  printf(" %d %d ",*p1,*p2);   // 120 29 

}
*/




//        ÖRNEK     -   7         - typedef ile çoklu array bildirimi
/*
int main(){

  typedef int INTA10[10];

  INTA10 a,b,c;

  print_array(a,10);
  printf("\n");
  print_array(b,10);
  printf("\n");
  print_array(c,10);
  
  // 3 farklı 10 elemanlı array oluşturduk
  // -2 6422280 1973841709 4201472 6422352 4201563 4201472   0 2097152 4194432 
  // -890451597 4199136 4199136   0 4201472 6422224 6422280 6422476 1973865664 -1087981497 
  // 1973841657 12717164 6422204 1973907349 1974223644 6422268 1973904625   8 1973841469 1973841443 


}
*/




//        ÖRNEK     -   8         -